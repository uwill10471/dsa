#include<iostream>
using namespace std;
int main(){
  int arr[6] = {1,7,9,2,3,0};
  int n  = sizeof(arr)/sizeof(arr[0]);
  for(int i =0 ;i<n;i++){
    for(int j =0;j<n;j++){
      if(arr[i]<arr[j]){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]= temp;
      }
    }
  }

  for(int i=0; i<n;i++){
    cout<<arr[i];
  }
}