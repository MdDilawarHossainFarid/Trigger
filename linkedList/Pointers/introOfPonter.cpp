/*
Introduction of pointer
*/

#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int *p; // Pointer variable diffrent from normal variables it store Address of nomal variable
    p = &x; //P is also normal variable it has value and address

    // int *a, b, *c; when ever you creating multiple value in single declaration alway use * every ponter variable

    cout << x << endl;
    cout << *p << endl; //Here *p is Dereference variable it give the value of normal variale 
    cout << p << endl;

    return 0 ;
}