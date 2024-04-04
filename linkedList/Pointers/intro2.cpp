/*
Introduction of pointer Example 2
*/

#include<iostream>
using namespace std;

int main(){

    int *ptr1;
    double *ptr2;
    string *ptr3;

    cout << sizeof(ptr1) <<endl; //you always get same value reason is pointer is store address
    cout << sizeof(ptr2) <<endl; //All the are of same size what ever it is int or duble ,char
    cout << sizeof(ptr3) <<endl;
    

    return 0;     
}