// dereferencing operator

#include<iostream>
using namespace std;

int main (){
    int a = 10;
   float b = 20.9;

    int *ptr = &a;
    cout <<"Address stored inside prt : " << ptr << "\n";
    cout << "Valu present at the address stored in ptr : " << *ptr << "\n"; //Dereference

    
   float *ptr1 = &b;
   cout <<"Address stored inside prt1 : " << ptr1 << "\n";
   cout << "Valu present at the address stored in ptr : " << *ptr1 << "\n";

   a = 90;
   cout << "Updatig with value using pointer"  << *ptr << "\n";

//    updating a with pointer
   *ptr = 100;
   cout << "New value of a is : " << a << "\n";

   int c = *ptr;

   cout <<" value of c is :" << c << "\n";


}