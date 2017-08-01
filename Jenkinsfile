pipeline {
    agent {
        label 'mikero'
    }

    stages {
        stage('Build') {
            steps {
                bat 'build.bat' 
                archiveArtifacts artifacts: '@*/**/*'
            }
            post {
                always {
                    bat 'subst p: /d > nul || exit /b 0'
                }
            }
        }
    }
}
