#include<iostream>
using namespace std;

void merge(int *arr , int s, int e){
  int mid = s+(e-s)/2;
 int len1 = mid -s + 1;
  int len2 = e-mid;

  int *first = new int[len1];
  int *second = new int[len2];

  // copying value of left array in first
  int mainArrayIndex = s;
  for(int i=0;i<len1;i++){
    first[i]=arr[mainArrayIndex++];
  }

  // copying value of right array in second
  mainArrayIndex = mid+1;
  for(int i=0;i<len1;i++){
    second[i]=arr[mainArrayIndex++];
  }

  //merging two sorted array
  int index1 =0;
  int index2=0;
  mainArrayIndex =s;
  while(index1 < len1 && index2 < len2){
    if(first[index1]<second[index2]){
      arr[mainArrayIndex++] =first[index1++];
    }else{
      arr[mainArrayIndex++] =second[index2++];
    }
  }

  while(index1 < len1){
    arr[mainArrayIndex++] =first[index1++];
  }

  while(index2< len2){
    arr[mainArrayIndex++] =second[index2++];
  }
}

void mergeSort(int *arr,int s, int e){
  //base case
  if(s>=e){
    return;
  }
  int mid = s+(e-s)/2;
//split left part
  mergeSort(arr,s,mid);
//split right part
  mergeSort(arr,mid+1,e);
  // merge 
  merge(arr,s,e);
  
}

int main(){
  int arr[10]= {1,2,3,4,5,6,7,8,9,0};
  int n = 10;
  mergeSort(arr,0,n-1);
  for(int i =0 ;i < n ;i ++){
    cout<<arr[i]<<" ";
  }
  
}