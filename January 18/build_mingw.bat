@echo off
setlocal
if not exist .\build mkdir build
cd build
cmake .. -G "MinGW Makefiles"
mingw32-make