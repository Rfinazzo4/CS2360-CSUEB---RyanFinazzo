/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on January 10th 2017
 * 
 */
//System Libraries 
#include <iostream>//Input output stream library
using namespace std; //iostream uses standard namespace
    
void sort( int*, int );
double average( int*, int );

int main()
{
    int size;
    
    // ask the user for the size of the array 
    cout<<"Enter the amount of Test scores. "<<endl;
    
    // store their answer in memory
    cin>>size;
    // create the array dynamically
    int* scores = new int[size];
    
    // get the scores from the user
    for( int i = 0; i < size; i++ )
    {
        // ask the user for the score
        cout<<"Enter score #" <<i+1<<" ";
        cin>> *(scores+i);
        while (*(scores+i)<0){
            cout<<"Invalid Number please enter score #"<<i+1<<" again"<<endl;
            cin>>*(scores+i);
        }
        // store it in the array
        
    }
    
    // sort the scores
    sort(scores, size);
    
    // find the average
    
    double avg = average(scores, size);
    
    // display the scores
    cout << "TEST SCORES" << endl;
    for (int i=0; i<size; i++){
        cout<<*(scores+i)<<"  ";
    }
    
    // display the average
    cout <<endl<< "TEST AVERAGE" << endl;
    cout<< avg;
    // delete the dynamically allocate memory
    delete [] scores;
}

// selection sort
void sort(int a[], int size)
{ bool swap;
int temp;
do{
    swap = false;
    for (int i=1; i<size; i++){
        if (*(a+i)<*(a+i-1)){
            temp=*(a+i-1);
            *(a+i-1)=*(a+i);
            *(a+i)=temp;
            swap=true;
        }
    }
}while(swap);
}

double average(int a[],int size)
{
    double sum=0;
   
    for (int i=0; i<size; i++){
        sum=sum+*(a+i);
    }
    return (sum/size);
}