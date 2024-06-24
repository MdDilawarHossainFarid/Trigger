#include<iostream>
using namespace std;

int main(){
    int arr[] = {11,22};
    int *ptr = &arr[0]; 
    int *ptr1 = &arr[1]; 

    cout << "address of a[0] : " << ptr << "  " << "value a[0] : " << *ptr << "\n";
    cout << "address of a[0] : " << ptr << "  " << "value a[0] : " << *ptr << "\n";
  
 

    cout << "address of a[1] : " << ptr1 << "  " << "value a[1] : " << *ptr1 << "\n";

    cout << (ptr + 1) << " " << *(ptr+1) << "\n"; //this is same as above


}