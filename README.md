# Hex-and-Binary-Dump

Brian Arlantico

cssc3010

CS530 Fall 2020

Assignment #1, Hex and Binary Dump (xbd)

The following are discussed in this file:
1. File manifest
2. Compile instructions
3. Operating instrucitons
4. List/description of novel/significant design decisions
5. List/description of any extra features
6. List/description of all known bugs
7. Lessons Learned 

Files in directory:
 - main.cpp
 - fio.cpp
 - hexbinconv.cpp
 - functions.h
 - Makefile
 - README

Compile instrucitons:
run make and an executable xbd will be created

Operating instructions:
Once compiled, there are two different ways to invoke the program

    1. xbd <filename>
    2. xbd -b <filename>

The first command allows you to dump the hexadecimal representation of the data on your file.
The second command allows you to dump the binary representation of the data on your file.

List/description of novel/significant design decisions:
3 source code files and a header file were used to construct the program. Main.cpp contains the main method,
fio.cpp consists of the code required to read and open the file and analyze whether the correct flag was entered,
and hexbinconv.cpp consists of the functions that print the file in either hex or binary. Functions.h is the header
file that contains the declarations of the functions except main as well as the libraries required to run the program.

List/description of any extra features:
Error checking to let user know if unknown flag has been entered (i.e. xbd -c file.txt), if the file could not be opened, 
or if the number of command line arguments do not match the specificed amount as seen in the operation instructions seciton.

List/description of all known bugs:
No known bugs.

Lessons Learned: 
Having many source files as well as a header file can keep your code looking clean and readable. This also taught me to 
test with every file, since executables are composed of bytes just as text files are, however they have different functions.
If I had not tested it on an executable, I would not have seen my error.
