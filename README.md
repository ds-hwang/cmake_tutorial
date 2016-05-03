# cmake_tutorial
cmake_tutorial

* It's my c++ project template.
* It is same to [official cmake tutorial](https://cmake.org/cmake-tutorial/)

# Run
```
mkdir build; cd build
cmake -DUSE_MYMATH=ON -DCMAKE_INSTALL_PREFIX=./ ../
make
ctest
make install
#The next step is to build the project in the usual manner and then run CPack on it. To build a binary distribution you would run:
cpack --config CPackConfig.cmake
#To create a source distribution you would type
cpack --config CPackSourceConfig.cmake
```