#include<iostream>
using namespace std;

bool BinarySearch(int *arr,int key, int s, int e){
  //ele not found
  if(s>e)return false;
  //ele found
  
  int mid = s + (e-s)/2;
  if(arr[mid] == key)return true;
  if(arr[mid]<key){
    return BinarySearch( arr, key,mid+1, e);
  }else{
    return BinarySearch(arr,key,s,mid-1);
  }
}


int main(){
int arr[9] = {1,2,3,4,5,6,7,8,9};
int size = 9;
int key = 03;
int e = size;
  int s =0 ;
 bool found = BinarySearch(arr,key,s,e);
  if(found)cout<<"element exist";
  else cout<<"dosent exist";
  return 0;
}