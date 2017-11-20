/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on Feb 28, 2016
 * 
 */
//System Libraries 
#include <iostream> //Input output stream library
using namespace std; //iostream uses standard namespace

// User libraries

// Global constants

// Function prototypes
class Fun {
private: 
     double *array;
     
public: 
    Fun(int size); 
    void storenum (int size);
    float retrievenum (void);
    float returnhigh (int size);
    float returnlow (int size);
    float returnavg (int size);  
    ~Fun();
};
Fun::Fun(int size){
    
    array = new double[size];
    
}
Fun::~Fun(void){}

void Fun::storenum(int size){
    for (int i=0;i<size;i++){
        cout<<"Test score "<<i+1<<" ";
        cin>>array[i];
    }
    cout<<"You entered test scores : ";
    for (int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
}
float Fun::returnhigh(int size){
    float temp=array[0];
    for (int i=0; i<(size-1); i++){
        if (array[i+1]>temp){
            temp=array[i+1];
        }
    }
    return temp;
}

float Fun::returnlow(int size){
    float temp=array[0];
    for (int i=0; i<(size-1); i++){
        if (temp>array[i+1]){
            temp=array[i+1];
        }
    }
    return temp;
}
float Fun::returnavg(int size){
    float avg=0;
    for (int i=0; i<size; i++){
        avg+=array[i];
    }
    avg=avg/size;
    return avg;
}

float Fun::retrievenum(){
    cout<<"Which test score did you want to retrieve?"<<endl;
    int i;
    cin>>i;
    return array[i];
}

// Execution begins here!
int main(int argc, char** argv) {
    //declare variable
    int size;
    float high, low, avg;
    cout<<"How many test scores? "<<endl;
    cin>>size;
    
    
    // Process data
    Fun fun(size);
    
    fun.storenum(size);
    
    avg = fun.returnavg(size);
    cout<<endl<<"Average Score : "<<avg<<endl;
    
    high = fun.returnhigh(size);
    cout<<"Highest Score : "<<high<<endl;
    
    low = fun.returnlow(size);
    cout<<"Lowest Score : "<<low;
     
    // Output data
    
    // Exit stage Right!

    return 0;
}

