#include<iostream>
using namespace std;


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arrSize = sizeof(arr);
    int sizeofint = sizeof(int);
    int arrayLength = arrSize /sizeofint;
  int position;
  cin  >> position;

 int count = 0;
for(int i = 1; i < arrayLength; i++){
       if(position <= i){
count++;  
cout << count;
break;
       } 
       
    if(position == count){
        int temp1 = arr[position];
        int temp = arr[i];
        arr[position] = temp;
        arr[i] = temp1;
        break;
    }
}
for (int i = 0; i < arrayLength; i++)
{
   cout << arr[i];
}

  
}