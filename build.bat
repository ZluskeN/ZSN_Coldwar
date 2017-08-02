@echo off
setlocal enabledelayedexpansion

REM Calculating correct current folder
SET modpath=%~dp0
SET modpath=%modpath:~0,-1%

REM Remove old drive mapping
subst p: /d > nul

REM Mount Addons folder
subst p: "%modpath%\Addons"

mkdir @zsn_coldwar > nul 2> nul

REM Build pbo files using pboproject and check for errors
for /D %%s in (Addons\*) do (
	if %%~nxs NEQ temp (
		@echo Building %%~nxs
		pboproject +Clean -Engine=Arma3 -Key -Workspace=P:\ -Noisy -P -X +Mod="%modpath%\@zsn_coldwar" -R -Z P:\%%~nxs
		if !errorlevel! neq 0 (
			@echo Error encountered while building %%~nxs
			exit /b !errorlevel!
		)
	)
)

REM Remove drive mapping
subst p: /d

REM Mount Optionals folder
subst p: "%modpath%\Optional"

REM Build pbo files using pboproject and check for errors
for /D %%s in (Optional\*) do (
	if %%~nxs NEQ temp (
		@echo Building %%~nxs
		mkdir @%%~nxs > nul 2> nul
		pboproject +Clean -Engine=Arma3 -Key -Workspace=P:\ -Noisy -P -X +Mod="%modpath%\@%%~nxs" -R -Z P:\%%~nxs
		if !errorlevel! neq 0 (
			@echo Error encountered while building %%~nxs
			exit /b !errorlevel!
		)
	)
)

REM Remove drive mapping
subst p: /d
