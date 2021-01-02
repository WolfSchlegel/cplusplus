# Welcome to the calculator project

This finger-exercise demonstrates how to organise source and test code in
different subfolders. 

The project uses the [unity](https://github.com/ThrowTheSwitch/Unity)
framework for unit testing. Unity is published under the MIT License (c.f. `LICENSE.txt` file in the `test` folder).

The folder structure and CMake build files are inspired by this
[article](https://arne-mertz.de/2018/06/cmake-project-structure/).

## How to build the project on the console
```
cd <root folder>/cplusplus/Calculator

mkdir cmake-build-handrolled
cd cmake-build-handrolled

cmake ..
cmake --build .
```
