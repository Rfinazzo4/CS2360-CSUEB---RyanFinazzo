/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on July 21, 2016, 12:27 PM
 * 
 */
//System Libraries 
#include <iostream> //Input output stream library
#include <string>
#include <iomanip>
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes
struct Data{
    
    string name;
    int num;
    int pts;
    
};
void display(Data[]);
void process(Data[]);
// Execution begins here!
int main(int argc, char** argv) {
    // Introduce the program
    // Declare variables,doubles
    Data player[5];
    
    // Input data
    for(int i=0; i<5;i++){
        cout<<"Enter the name for player "<<i+1<<": ";
        cin>>(player[i].name);
        cout<<"Enter the number for player "<<i+1<<": ";
        cin>>player[i].num;
        cout<<"Enter the points for player "<<i+1<<": ";
        cin>>player[i].pts;
        cout<<"-----------------------------------------------------\n";
    }
    // Process data
    display(player);
    process(player);
    
    // Output data
    
    // Exit stage Right!

    return 0;
}

void display(Data p[]){
    cout<<"-----------------------------------------------------\n";
    cout<<setw(20)<<left<<"PLAYER"<<setw(10)<<"NUMBER"<<setw(10)<<"POINTS"<<endl;
    cout<<setw(20)<<left<<"------"<<setw(10)<<"------"<<setw(10)<<"------"<<endl;
    for (int i=0; i<5 ;i++){
        cout<<setw(20)<<left<<p[i].name<<setw(10)<<p[i].num<<setw(10)<<p[i].pts<<endl;
    }
}

void process(Data p[]){
    int sum;
    for (int i=0; i<5; i++){
        sum+=p[i].pts;
    }
    cout<<"-----------------------------------------------------\n";
    cout<<setw(30)<<left<<"TOTAL POINTS = "<<sum<<endl;
    cout<<"-----------------------------------------------------\n";
    if (p[0].pts>p[1].pts && p[0].pts>p[2].pts && p[0].pts>p[3].pts && p[0].pts>p[4].pts){
        cout<<"Top Scorer : "<<p[0].name<<", #"<<p[0].num<<endl;
        cout<<"-----------------------------------------------------\n";
    }
    else if (p[1].pts>p[0].pts && p[1].pts>p[2].pts && p[1].pts>p[3].pts && p[1].pts>p[4].pts){
        cout<<"Top Scorer : "<<p[1].name<<", #"<<p[1].num<<endl;
        cout<<"-----------------------------------------------------\n";
    }
    else if (p[2].pts>p[1].pts && p[2].pts>p[0].pts && p[2].pts>p[3].pts && p[2].pts>p[4].pts){
        cout<<"Top Scorer : "<<p[2].name<<", #"<<p[2].num<<endl;
        cout<<"-----------------------------------------------------\n";
    }
    else if (p[3].pts>p[1].pts && p[3].pts>p[2].pts && p[3].pts>p[0].pts && p[3].pts>p[4].pts){
        cout<<"Top Scorer : "<<p[3].name<<", #"<<p[3].num<<endl;
        cout<<"-----------------------------------------------------\n";
    }
    else {
        cout<<"Top Scorer : "<<p[4].name<<", #"<<p[4].num<<endl;
        cout<<"-----------------------------------------------------\n";
    }
}