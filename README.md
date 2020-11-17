# ZSN_Coldwar

This is a Cold War era compilation mod, which introduces Soviet and US factions from the late 80's.

It also includes a bunch of optional configs for NI Arms AK pack and RHS mod

## Build locally

Double click build.bat to generate pbo files in `addons` and `optionals` folders.

The main repository folder can be used as mod when Arma 3 is launched and it will use the built PBOs in the `addons` folder.

## Release locally

Double click `release.bat` to generate a release version in `releases`.

`bsl` key in the root `keys` folder will be used to sign the PBOs.
`bsl` key in the root `keys` folder will be copied to the mod folder.

## Build on GitHub Actions

Mod is automatically built on push and pull request.

A generated `bsl` key will be used to sign the PBOs.
