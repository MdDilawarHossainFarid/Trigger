#include<iostream>
using namespace std;


void fun1(int n){
if(n == 0){
    return;
}
cout << n << endl;
fun1(n - 1);
}

void fun2(int n){
if(n == 0){
    return;
}
fun1(n - 1);
cout << n << endl;
}





int main(){
    int t;
    cin >> t;
for(int i = 0; i < t; i++){
    int n;
    cin >> n;
 fun2(n);
}
}