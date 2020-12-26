/**
* Brian Arlantico
* cssc3010
* CS530 Fall 2020
* Assignment 1, Hex and Binary Dump (xbd)
* functions.h
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include<string> //Libraries used within my source code.
#include<fstream>
#include <iomanip>
#include<iostream>
#include <bitset>

void readFile(int argc, char** argv, int &flag, ifstream &file); //fio.cpp
void convToHex(ifstream & infile); //hexbinconv.cpp
void convToBin(ifstream & infile); //hexbinconv.cpp

#endif