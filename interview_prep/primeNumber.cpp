#include<iostream>
using namespace std;


int main(){
    int number;
    cin >> number;
    cout << number << endl;
    if(number % 1 == 0 && number % number == 0){
        cout << "Number is prime";
    }else {
        cout << "Number is not prime";
    }
}