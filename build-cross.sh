#!/bin/bash

# example command line for cross compiling
# see VS2015 if you want to build with Visual Studio

CXX=i686-w64-mingw32-g++

mkdir -p build

$CXX -o build/hello_world.dll src/*.cpp -s -shared -Wl,--subsystem,windows
