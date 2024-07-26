#include<iostream>
using namespace std;
//inserting element in array
void insertElement(int n[] ,int size){
  cout<<endl;
  cout<<"enter the elements you want to insert = ";
  for(int i =0 ; i<size; i++){
    cin>>n[i];   
    }
  
}

//printing the element in array

void printElement(int n[] , int size){
  cout<<endl;
  cout<<" Elements in  array are = "<<endl;
  for(int i =0 ; i< size ; i++){
    cout<<n[i]<<" ";
  }
  cout<<endl;
}

// linear search 

int linearSearch(int searchEle , int n[] , int size){
  int ans=0;
  int count = 0;
  for(int i =0 ; i<size ; i++){
    if(searchEle == n[i]){
      ans = i ;
      count ++;
    }
  }
  if(count != 0){
      return ans;
    
  }else{
    return -1;
  }

} 





// main
int main(){
  int n[10],size;
  cout<<"enter the size of array";
  cin>>size;
  cout<<endl;
  insertElement(n,size);
  printElement(n,size);
  cout<<endl;
  cout<<"Enter the element you want to search";
  int searchEle;
  cin>>searchEle;
  int index  = linearSearch(searchEle,n,size);
  if(index == -1){
    cout<<"Not in array";
  }else{  cout<<endl;
  cout<<"Element is at index = "<<index; }
  
return 0;
 
}