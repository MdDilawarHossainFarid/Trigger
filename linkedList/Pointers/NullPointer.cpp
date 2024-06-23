#include<iostream>
using namespace std;

int main(){
    // int *ptr;
    // cout << *ptr; // It store random address  //uninitilize pointer is call wild pointer

    int *ptr = NULL; // NULL is just special value ofr pointer variable which means NULL does not hold any valid memory address
    cout << *ptr;
    return 0; 
}