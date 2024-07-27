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

void fun3(int n){
if(n == 0){
    return;
}
cout << n << endl;
fun3(n - 1);
cout << n << endl;
}

void fun4(int n){
if(n == 0){
    return;
}
fun4(n - 1);
cout << n << endl;
fun4(n - 1);
cout << n << endl;
}

int fun5(int n){
    if(n == 1){
        return 0;
    }else {
        return 1 + fun5(n/2);
    }
}

void fun6(int n){
    if(n == 0)
        return;
    fun6(n/2);
    cout << (n % 2);
}

int SumOfNumber(int n){
    if(n == 0){
        return 0;
    }
    return n + SumOfNumber(n - 1);
}

int fact(int n){
    if(n == 0){
        return 1;
    }
return n * (n-1);
}

int fib(int n){
    if(n <= 1){
        return n;
    }
        int last = fib(n -1);
        int secendLast = fib(n - 2);
        return last + secendLast;
    
}


int main(){
    int t;
    cin >> t;
for(int i = 0; i < t; i++){
    int n;
    cin >> n ;
  cout << fib( n );
}
}