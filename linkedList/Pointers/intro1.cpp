/*
Introduction of pointer Example 1
*/

#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int *ptr;
    ptr = &x;

    cout << *ptr << endl;
    x = x + 30;
    cout << *ptr << endl;
    *ptr = *ptr + 40;
    cout << *ptr << endl;

    return 0;     
}