#include<iostream>
using namespace std;

void print(int *arr , int length){
  cout<<"size of array is ="<<length<<endl;
  for(int i =0 ; i <length ;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int LinearSearch(int arr[] , int val , int length){
   print(arr,length);
  if(length == 0)return 0;
 if (arr[0] == val){
   return true;
 }else{
  return LinearSearch(arr+1, val, length -1);
 }
}



int main(){
int arr[9] = {1,2,3,4,5,6,7,8,9};
  int val;
int length = sizeof(arr)/sizeof(arr[0]);
  cout<<"Type the value you want to look for";
  cin>>val;
bool found = LinearSearch(arr,val,length);
  if(found)cout<<"ele is present";
  else cout<<"no such ele";
  return 0;
}