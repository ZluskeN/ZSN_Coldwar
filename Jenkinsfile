pipeline {
    agent {
        label 'mikero'
    }

    options {
        skipDefaultCheckout()
    }

    environment {
        DISCORD_WEBHOOK_URL = credentials('ZLUSKEN_DISCORD_WEBHOOK_URL')
    }

    stages {
        stage('Checkout') {
            steps {
                // Wipe the workspace so we are building completely clean
                deleteDir()
                // Checkout code from repository
                checkout scm
            }
        }

        stage('Build') {
            steps {
                withCredentials([
                    file(credentialsId: 'ZLUSKEN_PRIVATE_KEY', variable: 'ZLUSKEN_PRIVATE_KEY'),
                    file(credentialsId: 'ZLUSKEN_PUBLIC_KEY', variable: 'ZLUSKEN_PUBLIC_KEY')
                ]) {
                    bat 'copy %ZLUSKEN_PRIVATE_KEY% Keys'
                    bat 'copy %ZLUSKEN_PUBLIC_KEY% Keys'
                }

                bat '''
                mklink /J Addons\\a3 %A3_DATA%\\a3
                mklink /J Optional\\a3 %A3_DATA%\\a3

                mkdir Addons\\CUP
                mkdir Optional\\CUP
                for /D %%s in (..\\cup_units\\CUP\\*) do (
                    mklink /J Addons\\CUP\\%%~ns %%s
                    mklink /J Optional\\CUP\\%%~ns %%s
                )
                for /D %%s in (..\\cup_vehicles\\CUP\\*) do (
                    mklink /J Addons\\CUP\\%%~ns %%s
                    mklink /J Optional\\CUP\\%%~ns %%s
                )
                for /D %%s in (..\\cup_weapons\\CUP\\*) do (
                    mklink /J Addons\\CUP\\%%~ns %%s
                    mklink /J Optional\\CUP\\%%~ns %%s
                )

                mklink /J Optional\\rhsafrf ..\\rhs\\rhsafrf
                '''
                bat 'build.bat'
                archiveArtifacts artifacts: '@*/**/*'
                archiveArtifacts artifacts: '**/temp/*.log'
            }
            post {
                always {
                    bat 'rmdir /S /Q Addons\\a3 > nul || exit /b 0'
                    bat 'rmdir /S /Q Optional\\a3 > nul || exit /b 0'
                    bat 'rmdir /S /Q Addons\\CUP > nul || exit /b 0'
                    bat 'rmdir /S /Q Optional\\CUP > nul || exit /b 0'
                    bat 'rmdir /S /Q Optional\\rhsafrf > nul || exit /b 0'
                    bat 'subst p: /d > nul || exit /b 0'
                    sendNotificationToDiscord()
                }
            }
        }
    }
}

void sendNotificationToDiscord() {
    def description = "**Log:** ${BUILD_URL}console\n**Artifacts:** ${BUILD_URL}artifact/"
    def successful = currentBuild.resultIsBetterOrEqualTo('SUCCESS')
    def title = JOB_NAME

    if (env.CHANGE_TITLE) {
        title += " - ${env.CHANGE_TITLE}"
    }

    if (env.CHANGE_URL) {
        description += "\n**GitHub:** ${env.CHANGE_URL}"
    }

    discordSend description: description, link: BUILD_URL, title: title, successful: successful, webhookURL: DISCORD_WEBHOOK_URL
}
