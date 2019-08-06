@echo off
setlocal enabledelayedexpansion

REM Calculating correct current folder
SET modpath=%~dp0
SET modpath=%modpath:~0,-1%

REM Remove old drive mapping
subst p: /d > nul

REM Mount Addons folder
subst p: "%modpath%\Addons"

for /F "Tokens=2* skip=2" %%A In ('REG QUERY "HKCU\SOFTWARE\Bohemia Interactive\dssignfile" /v "path" 2^>nul') do (set DSSIGNFILEPATH=%%B)
if not defined DSSIGNFILEPATH echo "Arma 3 Tools does not seem to be installed, signing will be disabled"

mkdir @zsn_coldwar > nul 2> nul
mkdir @zsn_coldwar\Keys > nul 2> nul

REM Build pbo files using pboproject and check for errors
for /D %%s in (Addons\*) do (
	if %%~nxs NEQ temp (
		echo Building Addons\%%~nxs to @zsn_coldwar\Addons
		pboproject +Clean -Engine=Arma3 -Key -Workspace=P:\ -Noisy -P -X +Mod="%modpath%\@zsn_coldwar" -R -Z P:\%%~nxs
		if !errorlevel! neq 0 (
			@echo Error encountered while building %%~nxs
			exit /b !errorlevel!
		)

		if defined DSSIGNFILEPATH (
			for %%k in (Keys\*.biprivatekey) do (
				echo Signing @%%~nxs\Addons\%%~nxs with Keys\%%~nxk
				"%DSSIGNFILEPATH%\DSSignFile.exe" "%%k" "@zsn_coldwar\Addons\%%~nxs.pbo"
			)
		)
	)
)

if defined DSSIGNFILEPATH (
	for %%k in (Keys\*.bikey) do (
		echo Copying %%~nxk to @zsn_coldwar\Keys
		copy "%%k" "@zsn_coldwar\Keys" > nul
	)
)

REM Remove drive mapping
subst p: /d

REM Mount Optionals folder
subst p: "%modpath%\Optional"

REM Build pbo files using pboproject and check for errors
for /D %%s in (Optional\*) do (
	if %%~nxs NEQ temp (
		@echo Building Optional\%%~nxs to @%%~nxs\Addons
		mkdir @%%~nxs > nul 2> nul
		mkdir @%%~nxs\Keys > nul 2> nul
		pboproject +Clean -Engine=Arma3 -Key -Workspace=P:\ -Noisy -P -X +Mod="%modpath%\@%%~nxs" -R -Z P:\%%~nxs
		if !errorlevel! neq 0 (
			@echo Error encountered while building %%~nxs
			exit /b !errorlevel!
		)

		if defined DSSIGNFILEPATH (
			for %%k in (Keys\*.bikey) do (
				echo Copying %%~nxk to @%%~nxs\Keys
				copy "%%k" "@%%~nxs\Keys" > nul
			)

			for %%k in (Keys\*.biprivatekey) do (
				for %%f in (@%%~nxs\Addons\*.pbo) do (
					echo Signing @%%~nxs\Addons\%%~nxf with Keys\%%~nxk
					"%DSSIGNFILEPATH%\DSSignFile.exe" "%%k" "@%%~nxs\Addons\%%~nxf"
				)
			)
		)
	)
)

REM Remove drive mapping
subst p: /d
pause