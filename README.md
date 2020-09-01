# Competitive programming template


[//]: # "References"
[contact-albert]: albgarjim1@gmail.com

Template for competitive programming problems
<!-- description of what the project does  -->

## Table of Contents

- [Project title](#project-title)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Results](#results)
  - [Installation](#installation)
  - [Usage](#usage)
  - [License](#license)
  - [Contact](#contact)

## Introduction

The objective of this template is to provide an easy to configure, compile and run system for competitive programming problems. This configuration reduces the time needed to compile and run projects and reduces the errors than may happen when debug (read from file) and production (read from console) code is created which can cause unfortunate errors and penalizations.

## Results

If the project is compiled with the `-d` flag or debug mode:
- A `debug` folder is created
- The input is taken from the `test.in` folder
- The output is taken from the `test.out` folder
- The `source.cpp` file is copied to the freshly created debug.cpp file

If the project is compiled with the `-p` flag or production mode:
- The input is taken from console
- The output is written on console
- The `source.cpp` file is copied to the freshly created prod.cpp file

## Installation


Clone this repository with the command:

```sh
git clone https://github.com/albgarjim/comp-prog-template.git
```

Navigate into the src file insidie the `comp-prog-template` folder:

```sh
cd ./src/comp-prog-template
```

<!-- name technologies used and how to build project -->


## Usage

Steps for the process

- Add your code inside the `main` function on the `source.cpp` file
- If you are on windows execute the following command:

```sh
<path_of_repository>\run.bat
```
The script allows the flags `-d` for debug and `-p` for production

-If you are on Linux execute the following commands
```sh
sudo chmod +x ./run.sh
```
This command gives execution permission to the file, after this, the script can be executed with
```sh
./run.sh
```

Both scripts allows the flags `-d` for debug and `-p` for production.
If the script is executed with the `-d` flag, the `source.cpp file` will be copied on the debug.cpp file
If the script is executed with the `-p` flag, the `source.cpp file` will be copied on the prod.cpp file. This source.cpp is the file that should be uploaded, it will read from terminal and write in terminal.

## License

Released under MIT license


## Contact

Maintainer: [Alberto Garcia][contact-alberto]
