#include<iostream>
using namespace std;

// how to store address of variable

int main(){
int a = 10;
float b = 3.5;

int *ptr = &a;
float *ptr1 = &b;

cout << &a << " " << ptr <<'\n'; 
cout << &b << " " << ptr1; 

}