#include<iostream>
using namespace std;

bool isSorted(int arr[],int length){
  if(length == 0)return true;
  if(length == 1)return true;
  if(arr[0] > arr[1]){
    return false;
  }else{
    bool remaningPart = isSorted(arr+1,length-1);
    return remaningPart;
  }
}



int main(){
int arr[6] = {1,2,5,3,4,6};
int length = sizeof(arr)/sizeof(arr[0]);
  bool k = isSorted(arr,length);
  cout<<k;
  if(k==1)cout<<"Array is sorted";
  else cout<<"Array is not sorted";
  return 0;
}