# xc8-cmake-template
My template for Microchip's XC8, CMake based, projects

# Usage
This project uses submodules, after cloning this project execute `git submodule init` to download dependencies.

# Configuration for VS Code

You may have to adjust some things like processor type macros and compiler paths, but this should be a good starting point.
I have my `c_cpp_properties.json` configured as follows:
```
{
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/app/include/**",
                "C:\\Program Files (x86)\\Microchip\\xc8\\v2.00\\pic\\include",
                "C:\\Program Files (x86)\\Microchip\\xc8\\v2.00\\pic\\include\\c99"
            ],
            "defines": [
                "_DEBUG",
                "_GNU_SOURCE=0",
                "_BSD_SOURCE=0",
                "__16F18857",
                "__XC",
                "__XC8",
                "__XC8_VERSION=2000",
                "_16F18857",
                "_HTC_EDITION_=2",
                "__PICCPRO__",
                "__PICC__",
                "_PIC14E",
                "HI_TECH_C"
            ],
            "compilerPath": "C:/Program Files (x86)/Microchip/xc8/v2.00/bin/xc8.exe",
            "cStandard": "c99",
            "cppStandard": "c++17",
            "intelliSenseMode": "gcc-x64"
        }
    ],
    "version": 4
}
```
