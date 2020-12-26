/**
* Brian Arlantico
* cssc3010
* CS530 Fall 2020
* Assignment 1, Hex and Binary Dump (xbd)
* fio.cpp
*/

using namespace std;
#include "functions.h"

/**
 * @brief Opens file and checks flags
 * @param argc is number of arguments from commmand line
 * @param argv array containing arguments from cmd line
 * @param flag used to indicate if flag is present and valid
 * @param file is the reference to object to open file
 * @return void
 */
void readFile(int argc, char** argv, int &flag, ifstream &file) {

    if (argc == 3) { //Program called with filename and flag
        string sflag = argv[1];
            if (sflag.compare("-b") != 0) 
                flag = -1;  //Negative flag for unknown flag.

            else { //Proper flag entered and opens file.
        flag = 1;
        file.open(argv[2],ifstream::in);
            }
    }

    else { //Regular xxd.
      file.open(argv[1],ifstream::in);
     
    }
}
