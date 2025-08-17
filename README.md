# CMake example for modular C programming

Building the project:

```
mkdir build && cd build
cmake ..
cmake --build .
cmake --install . --prefix .
bin/main

# to get clangd to work after you run the build the first time
mv compile_commands.json ..
```
