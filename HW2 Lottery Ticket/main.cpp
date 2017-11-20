/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on January 10th 2017
 * 
 */
//System Libraries 
#include <iostream>//Input output stream library
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes
int bsearch(int[], int, int);
void bsort (int[], int);
// Execution begins here!
int main(int argc, char** argv) {
    // Introduce the program
    cout<<"This program determines if you have a winning lottery ticket!"<<endl;
    // Declare variables,doubles
    
    int array[] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };
    int ticket;
    int result;

    // Input data
    cout<<"What was this weeks lottery ticket number?"<<endl;
    cin>>ticket;
   
    // Process data
    bsort(array, 10);
    result = bsearch(array, 10, ticket);
    
    // Output data
    if (result == -1){
        cout<<"You have lost"<<endl;
    }
    else
        cout<<"Your ticket number "<<array[result]<<" is a winner!"<<endl;
    // Exit stage Right!

    
    return 0;
}

int bsearch(int a[], int size, int target){
    int L=0, R=size-1, m;
    do {
        m=(L+R)/2;
        if (target==a[m])
            return m;
        else if (target<a[m])
            R=m-1;
        else 
            L=m+1;       
    } while(L<=R);
   
    
    return -1;
}


void bsort (int a[], int size){
    bool swap;
    int temp;
    do { 
        swap = false;
        for (int i = 1; i < size; i++)
        {
            if (a[i] < a[i-1])
            {
                temp = a[i-1];
                a[i-1] = a[i];
                a[i] = temp;
                swap = true;
                }
        }
    } while(swap);
}
    

   