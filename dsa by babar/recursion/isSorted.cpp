#include<iostream>
using namespace std;

bool isSorted(int arr[],int& length){
  if(length == 0)return true;
  if(length == 1)return true;
  for(int i=1 ;i<length ;i++){
    if(arr[i]>=arr[i-1]){
      continue;
    }else return false;
  }
return true;
}



int main(){
int arr[2] = {1,2};
int length = sizeof(arr)/sizeof(arr[0]);
  bool k = isSorted(arr,length);
  cout<<k;
  if(k==1)cout<<"Array is sorted";
  else cout<<"Array is not sorted";
  return 0;
}