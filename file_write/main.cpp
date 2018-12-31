#include <iostream>
#include <fstream>
using namespace std;

void getFileName(char fileName[]); // prototype
bool writeFile(char fileName[]); 

int main() 
{
    
    char fileName[256];
    getFileName(fileName);
    
    bool success = writeFile(fileName);
    if (!success)
        cout << "Your file was written to successfully.\n";
    else
        cout << "Your file could not be written to at this time.\n";

    return 0;
}

/******************************************
 * Get File Name
 * Prompt user for file name
 * ****************************************/
void getFileName(char fileName[]) {
    //char fileName[256];
    cout << "Enter a file name: ";
    cin >> fileName;
    if (!cin) 
        cout << "You did something stupid.\n";
    else
        cout << "You entered: " << fileName << endl;
}

/******************************************
 * Write File
 * Writes to file
 * Returns write status
 * ****************************************/
bool writeFile(char fileName[]) {
    bool success;
    // declare output
    //ofstream fout; // this would overwrite anything in the file
    ofstream fout(fileName, ios::app); // use constructor to open and append to file
    // open file
    //fout.open(fileName); // could use this
    // write some text
    fout << "If you are reading this then the file has been written to..." << endl;
    // close stream
    fout.close();

    // check error state
    success = fout.rdstate();
    cout << "Write state: " << success << endl;
    return success;
}