/**
* Brian Arlantico
* cssc3010
* CS530 Fall 2020
* Assignment 1, Hex and Binary Dump (xbd)
* main.cpp
*/

using namespace std; 


#include "functions.h"

int main(int argc, char** argv) {

    //File and flag variable declaration.
    ifstream decFile;
    int flag = 0;

    if ( argc == 1 || argc > 3 ) { //No filename entered
        cout<<"Usage: xbd (-b) <filename>\n";
        return 0;
    }

    //calls function to open file and check if -b flag was included
    readFile(argc, argv, flag, decFile);

     if (flag == -1)  //incorrect flag entered
        cout << "Error: Unknown flag" << endl;

    else if (!decFile.is_open()) //File could not be opened.
        cout << "Error: File cannot be opened." << endl;
    
    else if (flag == 1) //flag -b was entered, dump binary
        convToBin(decFile);

    else //no flag was entered, regular xxd
        convToHex(decFile);

    //close file to avoid leak
    decFile.close();

    return 0; //End of program

    
}
