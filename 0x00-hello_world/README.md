This is a README.md file for this repository

**File `0-preprocessor`:** Runs a C file through the preprocessor and save the result into another file.

-   The C file name will be saved in the variable  `$CFILE`
-   The output should be saved in the file  `c`

**File `1-compiler`:**Compiles a C file but does not link.

-   The C file name will be saved in the variable  `$CFILE`
-   The output file should be named the same as the C file, but with the extension  `.o`  instead of  `.c`.
-   Example: if the C file is  `main.c`, the output file should be  `main.o`

**File `2-assembler`:** Generates the assembly code of a C code and save it in an output file.

-   The C file name will be saved in the variable  `$CFILE`
-   The output file should be named the same as the C file, but with the extension  `.s`  instead of  `.c`.
-   Example: if the C file is  `main.c`, the output file should be  `main.s`

**File `3-name`:** Compiles a C file and creates an executable named  `cisfun`.

-   The C file name will be saved in the variable  `$CFILE`

**File `4-puts.c`:** C program that prints exactly  `"Programming is like building a multilingual puzzle`, followed by a new line.

-   Use the function  `puts`
-   You are not allowed to use  `printf`
-   Your program should end with the value  `0`

**File `5-printf.c`:** C program that prints exactly  `with proper grammar, but the outcome is a piece of art,`, followed by a new line.

-   Use the function  `printf`
-   You are not allowed to use the function  `puts`
-   Your program should return  `0`
-   Your program should compile without warning when using the  `-Wall`  `gcc`  option

**File `6-size.c`:**  C program that prints the size of various types on the computer it is compiled and run on.

-   You should produce the exact same output as in the example
-   Warnings are allowed
-   Your program should return  `0`
-   You might have to install the package  `libc6-dev-i386`  on your Linux to test the  `-m32`  `gcc`  option

**File `100-intel`:** Generates the assembly code (Intel syntax) of a C code and save it in an output file.

-   The C file name will be saved in the variable  `$CFILE`.
-   The output file should be named the same as the C file, but with the extension  `.s`  instead of  `.c`.
    -   Example: if the C file is  `main.c`, the output file should be  `main.s`

**File `101-quote.c`:** C program that prints exactly  `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

-   You are not allowed to use any functions listed in the NAME section of the man (3)  `printf`  or man (3)  `puts`
-   Your program should return 1
-   Your program should compile without any warnings when using the  `-Wall`  `gcc`  option
