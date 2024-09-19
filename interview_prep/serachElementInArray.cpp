#include<iostream>
using namespace std;


int main(){
    int arr[] = {10,11,12,13,14,15};
    int arrSize = sizeof(arr);
    int sizeofint = sizeof(int);
    int arrayLength = arrSize /sizeofint;
    int element = 15;
for(int i = 0; i < arrayLength; i++){
      if(element == arr[i]){
          cout << element;
    
          cout << "Not found";
      };

    };
  
}