#include<iostream>
using namespace std;

int main(){
    int *ptr; //if we declare but not assign any address then it assign random address it depends of compiler ot compiler

    cout << ptr << '\n';

    int a = 10;

    ptr = &a;

    cout << ptr;
}