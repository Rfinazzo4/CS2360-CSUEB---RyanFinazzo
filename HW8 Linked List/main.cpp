/* 
 * File:   main.cpp
 * Author: Ryan Finazzo
 *
 * 
 */
//System Libraries 
#include <iostream> //Input output stream library
using namespace std; //iostream uses standard namespace

#include <iostream>
 
using namespace std;
 
class NumberList {
public:
    double value;
    NumberList* next;
    NumberList(double value) {
        this->value = value;
        next = 0;
    }
};
class List {
    NumberList* head;
public:
    List() {}
    ~List() {}
 
    void append(double value) {
        NumberList* p = head;
        if (p == 0) {
            head = new NumberList(value);
            return;
        }
        else {
            while ((p->next) != 0) {
                p = p->next;
            }
        }
        p->next = new NumberList(value);
    }
 
    void deleteNode(double value) {
        NumberList* p = head;
        NumberList* temp = 0;
        while (p != 0) {
            if (p->value == value) {
                if (!temp) {
                    head = p->next;
                }
                else {
                    temp->next = p->next;
                }
                delete p;
                return;
            }
            temp = p;
            p = p->next;
        }
    }
 
    void display() {
        NumberList* p = head;
        while (p != 0) {
            cout << p->value << " ";
 
            p = p->next;
        }
        cout << endl;
    }
 
    int count() const {
        NumberList* p = head;
        int i = 0;
        while (p != 0) {
            i++;
            p = p->next;
        }
        return i;
    }
 
    int find(double value) const {
        NumberList* p = head;
        int i = 0;
        while (p != 0) {
            if (p->value == value) {
                return i;
            }
            i++;
            p = p->next;
        }
        return -1;
    }
};
 
int main() {
    List list = List();
    bool swap=true;
    while(swap==true){
        cout << "A - append a value to the list" << endl;
        cout << "R - remove a value from the list" << endl;
        cout << "P - print the list" << endl;
        cout << "S - show the size of the list" << endl;
        cout << "F - find a node in the list" << endl;
        cout << "Q - quit" << endl;
        double num;
        char c;
        cout << ": ";
        cin >> c;
        switch (c) {
        case 'A':
            cout << "Enter value: ";
            cin >> num;
            swap=true;
            list.append(num);
            break;
        case 'R':
            cout << "Enter value: ";
            cin >> num;
            swap=true;
            list.deleteNode(num);
            break;
        case 'P':
            list.display();
            swap=true;
            break;
        case 'S':
            cout << "Number of nodes: " << list.count() << endl;
            swap=true;
            break;
        case 'F':
            cout << "Enter value: ";
            cin >> num;
            swap=true;
            cout << "Found at: " << list.find(num) << endl;
            break;
        case 'Q':
            swap=false;
            return 0;
            break;
        default:
            cout << "Invalid input. Try again." << endl;
            swap=true;
            break;
        }
    }
}