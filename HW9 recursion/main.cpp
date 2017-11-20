/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on January 5th 2017
 * 
 */
//System Libraries 
#include <iostream>//Input output stream library
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes
bool isMember(int[], int, int);
// Execution begins here!
int main(int argc, char** argv) {
    // Introduce the program
    int array[]={1,2,3,4,5};
    int size = 5;
    int value;
    bool pop;
   
   
    for (int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    // Input data
    cout<<endl<<"Enter the number you want to search for."<<endl;
    cin>>value;
    // Process data
    
    pop=isMember(array, size, value);
    // Output data
 if(pop){
        cout<<"Found it!"<<endl;
    }
 else {
        cout<<"Not found";
    }
    // Exit stage Right!

    return 0;
}
bool isMember(int a[], int size, int value){
    if (size<1){
        return false;
    }
    else if (value==a[size-1]){
        return true;
    }
    else {
        size=size-1;
        return isMember(a, size, value);   
    }
}
    