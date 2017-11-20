/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 21, 2016, 12:27 PM
 * 
 */
//System Libraries 
#include <iostream> //Input output stream library
#include <fstream> 
#include <cstdlib>
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes
void arrayToFile (fstream &f, int*, int);
void fileToArray(fstream &f, int*, int);
// Execution begins here!
int main(int argc, char** argv) {
    //declare variable
    int sourcea [] = {3, 5, 7, 9};
    int size = 4;
    int desta[size];
    int * ptr;
    ptr = sourcea;
    fstream f;
    
    
    arrayToFile (f, ptr, size);
    cout<<"Source Array: "<<endl;
    for (int i=0; i<size; i++){
        cout<< sourcea[i]<<" ";
    }
    
    ptr=desta;
    fileToArray(f, ptr, size);
    cout<<endl<<"Destination Array: "<<endl;
    for (int i=0; i<size; i++){
        cout<< desta[i]<<" ";
    }
    // Process data
    
    // Output data
    
    // Exit stage Right!

    return 0;
}

void arrayToFile (fstream &f, int* ptr, int size){
    f.open("file.txt", ios::binary| ios:: out);
    
    if (f){
        f.write(reinterpret_cast<char*>(ptr), size*sizeof(int) );
        f.close();
    }
    else{
        cout<<"Error writing the File";
        
        exit(1);
    }
    
}

void fileToArray (fstream &f, int* ptr, int size){
    f.open("file.txt", ios::binary | ios:: in);
    
    if (f){
        f.read(reinterpret_cast<char*>(ptr), size*sizeof(int) );
        
        f.close();
    }
    else {
        cout<<"Error reading the File";
        
        exit(2);
    }
    
}