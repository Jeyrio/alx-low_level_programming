# 0x18. C - Dynamic libraries

# Resources
**Read or watch:**

1. [Difference Between Dynamic and Static Library i.e Linking](https://www.youtube.com/watch?v=eW5he5uFBNM)
2. [create dynamic libraries on Linux](https://medium.com/analytics-vidhya/dynamic-libraries-in-linux-c978b478efea)

## README file explaining what each script does


- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
- Basic usage nm, ldd, ldconfig

**Tasks**

0. A library is not a luxury but one of the necessities of life - [libdynamic.so](./libdynamic.so) - Created the dynamic library libdynamic.so containing all the functions list in the file.

1. Without libraries what have we? We have no past and no future - [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) - Created a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

2. Let's call C functions from Python - [100-operations.so](./100-operations.so) - Created a dynamic library that contains C functions that can be called from Python.

3. Code injection: Win the Giga Millions! - [101-make_me_win.sh](./101-make_me_win.sh) - Winning a Jackpot, using the Tip: LD_PRELOAD.

