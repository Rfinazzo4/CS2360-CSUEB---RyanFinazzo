/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on January 5th 2017
 * 
 */
//System Libraries 
#include <iostream>//Input output stream library
#include <string>
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes
double getSales(string);
void findHighest(float, float, float, float);

// Execution begins here!
int main(int argc, char** argv) {
    // Introduce the program
    cout<<"Hello, this program calculates which of the companies 4 divisions had the highest sales for the quarter."<<endl;
    // Declare variables,doubles
    float Neast, Seast, Nwest, Swest;
    string name;

    // Input data
    name = "NorthEast";
    Neast= getSales(name);
    
    name = "NorthWest";
    Nwest=getSales(name);

    name = "SouthEast";
    Seast = getSales(name);
    
    name = "SouthWest";
    Swest = getSales(name);
    // Process data

    // Output data
 findHighest(Neast, Nwest, Seast, Swest);   
    // Exit stage Right!

    return 0;
}

double getSales(string name){
    float amount;
   cout<<"Pease enter the sales total for the "<<name<<" division."<<endl;
    cin>>amount;
    while (amount<0){
        cout<<"Invalid Amount.  Try Again."<<endl;
        cin>>amount;
    }
    return amount;
}

void findHighest(float ne , float nw , float se, float sw){
    if (ne>nw && ne>se && ne>sw){
        cout<<"The highest grossing division is: NorthEast"<<endl;
        cout<<"Gross total: "<<ne;
    }
    else if (nw>ne && nw>se && nw>sw){
        cout<<"The highest grossing division is: NorthWest"<<endl;
        cout<<"Gross total: "<<nw;
    }
    else if (se>nw && se>ne && se>sw){
        cout<<"The highest grossing division is: SouthEast"<<endl;
        cout<<"Gross total: "<<se;
    }
    else {
        cout<<"The highest grossing division is: SouthWest"<<endl;
        cout<<"Gross total: "<<sw;
    }
}