/**
* Brian Arlantico
* cssc3010
* CS530 Fall 2020
* Assignment 1, Hex and Binary Dump (xbd)
* hexbinconv.cpp
*/

using namespace std;

#include "functions.h"

/**
 * @brief Reads file and prints out hex dump.
 * @param infile is the file read in that user wants hex dump.
 * @return void
*/
void convToHex(ifstream & infile) {
   string hexdmp;
    int max = 16;
    int address = 0;
    char buf[max + 1]; //for null terminator
    char ch;
    int i = 0;

   while (infile >> noskipws >> ch) {
    if (address % 16 == 0) { //newline after 16 bytes
        if (address != 0) {
            buf[max] = '\0';
            cout << " " << buf << endl;
            i = 0; 
        }

        //formatted address print
        cout << setfill('0') << setw(7) << hex << address << ": ";
    }

    if ((int) ch < 32 || (int) ch == 127) //127 = [DEL]
        buf[i] = '.'; //period for non-human readable characters
    else
        buf[i] = ch;
    
    cout << setfill('0') << setw(2) << hex << (int)(unsigned char) ch;
    i++; //increment for spacing purposes

    if (i % 2 == 0) //Space between every 2 bytes
        cout << " "; 
    address++;

   }

    //fills out space to print human readable form on right
    //side.
       if (i % 2 != 0)
            cout << " ";
       buf[i] = '\0';

       while (address % 16 != 0) {
           cout << "  ";

           if (i % 2 == 0) //space between every 2 bytes
            cout << " "; 

            address++;
            i++;
       }
       cout << " " << buf << endl;

}

/**
 * @brief Reads file and prints out binary dump.
 * @param infile is the file read in that user wants binary dump.
 * @return void
*/
void convToBin(ifstream & infile) {
    //variable declarations.
    string hexdmp;
    int max = 6;
    int address = 0;
    char buf[max + 1]; //for null terminator
    char ch;
    int i = 0;

   while (infile >> noskipws >> ch) {
    if (address % 6 == 0) {

        if (address != 0) {
            buf[max] = '\0';
            cout << " " << buf << endl;
            i = 0;
            
        }

        cout << setfill('0') << setw(7) << hex << address << ": "; //address format
    }

    if ((int) ch < 32 || (int) ch == 127) //127 = [DEL]
        buf[i] = '.'; //period for non-human readable characters.
    else
        buf[i] = ch; //readable human character
    
    cout << bitset<8> (ch); //print binary as 8 bits.
    i++;

    // space between every 8 bits
    cout << " "; 
    address++;

   }

    //fill space out and print human readable form formatted
    //on right side.
       buf[i] = '\0';

       while (address % 6 != 0) {
            cout << "         ";
            address++;
       }
       cout << " " << buf << endl; //print human readable form

}

