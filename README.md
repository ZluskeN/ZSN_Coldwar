# ZSN_Coldwar

This is a Cold War era compilation mod, which introduces Soviet and US factions from the late 80's.
It is based on CUP, Delta Hawk's US military mod and The Soviet troops in afghanistan mod from Disclose.

It also includes a bunch of optional configs for RH M16 pack, NI Arms AK pack, RHS mod,
Black Ops Weapons pack, Veteran mod, and West Germans using the Faces of War mod and NI Arms G3's

## Build locally

Make sure pboproject and any dependencies are installed from https://armaservices.maverick-applications.com/Products/MikerosDosTools/FileBrowserFree

Double click build.bat to generate pbo files in each mod directory.
Check Addons/temp and Optional/temp for build logs.

Any private keys in the root Keys folder will be used to sign the PBOs.
Any public keys in the root Keys folder will be copied to the mod folder.

## Build on Jenkins

Project uses Jenkinsfile to define build steps.
Add the repository or organization to Jenkins as a pipeline job and it should pick it up automatically.

It requires a node with the label "mikero" and pboproject must be available in PATH

To enable signing of PBOs, make sure a credential secret file ZLUSKEN_PRIVATE_KEY and ZLUSKEN_PUBLIC_KEY is available.
