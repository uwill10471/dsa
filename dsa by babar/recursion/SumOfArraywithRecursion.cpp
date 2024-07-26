#include<iostream>
using namespace std;

int getSum(int arr[],int length){
  if(length == 0)return 0 ;
  int sum = arr[0] + getSum(arr+1,length -1);
  
  return sum;
}



int main(){
int arr[1] = {99000};
int length = sizeof(arr)/sizeof(arr[0]);
int sum = getSum(arr,length);
  cout<<"sum is = "<<sum;
  return 0;
}