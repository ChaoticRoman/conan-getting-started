# Getting started with dependency management using Conan

## Installation

Conan requires you to have Python 3 and then it is just a pip package installation:

```
pip install --user conan
```

## Usage

Let us follow [the official documentation](https://docs.conan.io/2/tutorial/consuming_packages/build_simple_cmake_project.html).

We have created [conanfile.txt] and we also need to detect a profile, let us do it using

```
conan profile detect --force
```

> This will detect the operating system, build architecture and compiler settings based
> on the environment. It will also set the build configuration as Release by default.
> The generated profile will be stored in the Conan home folder with name default and
> will be used by Conan in all commands by default unless another profile is specified
> via the command line. 

Now we will get our dependencies using

```
conan install . --output-folder=build --build=missing
```

This is going to populate our `build` folder with some `CMake` and we are ready to build
our project:

```
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
cmake --build .
```
