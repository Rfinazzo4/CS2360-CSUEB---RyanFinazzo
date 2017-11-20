/* 
 * File:   main.cpp
 * Author: Ryanfinazzo
 *
 * Created on February 7, 2017, 2:39 PM
 */

#include <iostream>

using namespace std;

void binary(int[], int);
void selection(int[], int, int);

int main(int argc, char** argv) {

    int size=6;
    int array[]= {5658845, 4520125, 7895122, 8777541, 8451277, 1302850};
    int key;
    
    cout<<"Enter the number to search for"<<endl;
    cin>>key;
    
    binary(array, size);
    selection(array, size, key);
   
   
    return 0;
}

void binary (int a[], int s){
    bool swap=true;
    int temp;
    
    while (swap==true){
        swap=false; 
        for(int i=0; i<(s-1);i++){
            if (a[i]<a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swap=true;
            }
        }    
    }
}
void selection(int array[], int size,int key){
    int *p=size;
    return p;
}  