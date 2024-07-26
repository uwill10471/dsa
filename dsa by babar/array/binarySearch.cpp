#include<bits/stdc++.h>
using namespace std;
// chking if element present at mid
bool chkmid(int arr[],int mid , int key){
  if(arr[mid] == key){
    return true;
  }else{
    return false;
  }
}
//binary search 
int binarySearch(int arr[] , int n, int key){
  int mid = (0+n)/2;
  bool tof = chkmid(arr,mid,key);
  while(n){
  if(tof==1){
    return mid;
    
  }else if(arr[mid]<key){
              mid = (mid + n)/2;
          tof =   chkmid(arr,mid,key);
       if(tof == 1){
         return mid;
       }
  }else if(arr[mid]>key){
    mid =(0 + mid)/2;
    tof = chkmid(arr,mid,key);
    if(tof == 1){
       return mid;
     }
  }
    n--;
  }
  return -1;
}
//inserting element 
void insertEle(int arr[] , int n){
  for(int i=0 ;i<n;i++){
    int x;
    cin>>x;
    arr[i]= x;
  } }
// printing element 
void printEle(int arr[], int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[10];
  int n;
  cin>>n;
  insertEle(arr , n);
  sort(arr,arr+n);
  printEle(arr,n);
  int key;
  cout<<"enter the element to find ";
  cin>>key;
 int keyIndex = binarySearch(arr,n,key);
  if(keyIndex == -1){
    cout<<"element not found";
  }else{
    cout<<"element found at index" <<keyIndex;
  }
}
