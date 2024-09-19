#include<iostream>
using namespace std;


int main(){
    int arr[] = {10,11,12,13,14,15};
    int arrSize = sizeof(arr);
    int sizeofint = sizeof(int);
    int arrayLength = arrSize /sizeofint;
    int element = 10;
    int countElement = 0;
for(int i = 0; i < arrayLength; i++){
      if(  arr[i] < element){
         countElement++;
      };

    };
    cout << countElement;
  
}