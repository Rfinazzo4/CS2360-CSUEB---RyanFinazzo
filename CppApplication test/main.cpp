/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 * Created on January 10th 2017
 * 
 */
//System Libraries 
#include <iostream>//Input output stream library
#include <cstring>
#include <cctype>
using namespace std; //iostream uses standard namespace
    
void checksize(int);
bool checkupper(char [], int);
bool checklower(char [], int);
bool checkdigit(char[], int);
int main()
{
    int size=80;
    char passw[size];
    bool flag; 
    //Introduce the Program
    cout<<"This program verifies if the password meets the following criteria!"<<endl;
    cout<<"- The password must be at least six characters long"<<endl;
    cout<<"- The password must contain at least one uppercase and  one lowercase letter"<<endl;
    cout<<"- The password must have at least one digit"<<endl<<endl;
    
    //Input
    
    cout<<"Please enter a Password: ";
    cin.getline(passw,size);
    
    size=strlen(passw);
    
    checksize(size);
    
    //Check Functions 
    
    flag = checkupper(passw, size);
    if (flag==false){
        cout<<"Your password must contain an uppercase letter." <<endl;
    }
    
    flag = checklower(passw, size);
    if (flag==false){
        cout<<"Your password must contain a lowercase letter."<<endl;
    }
    
    flag = checkdigit(passw, size);
    if (flag==false){
        cout<<"Your password must contain a digit."<<endl;
    }
}

void checksize(int i){
   if (i<6){
        cout<<"The password isn't long enough."<<endl;
    }
}

bool checkupper(char pass[], int size){
    bool flag;
    for (int i=0; i<size; i++){
        if (isupper(pass[i])==true){
            return true;
        }
        else if (isupper(pass[i])==false){
            flag = false;
        }
    }return flag;
}
    
bool checklower(char pass[], int size){
    bool flag;
    for (int i=0; i<size; i++){
        if (islower(pass[i])==true){
            return true;
        }
        else if (islower(pass[i])==false){
            flag = false;
        }
    }return flag;
}
  
bool checkdigit(char pass[], int size){
    bool flag;
    for (int i=0; i<=size; i++){
        if (isdigit(pass[i])==true){
            return true;
        }
        else if (isdigit(pass[i])==false){
            flag=false;
        }
    }return flag;
}