#include<iostream>
using namespace std;

// inserting element in an array
int Insertelement(int n[] , int size){
  cout<<"insert the elements"<<endl;
  for(int i =0 ;i<size;i++){
    cin>>n[i];
    
  }
  return 0;
}
//printing element of an array
int printelement(int n[] , int size){
  cout<<endl;
  cout<<"elements of array are"<<endl;
  for(int i =0; i<size ;i++){
    cout<<n[i]<<",";
  }
  return 0;
}

//printng sum of elements in array

int sumelement(int n[] , int size){
  int sum = 0;
  for(int i=0;i<size;i++){
    sum = sum + n[i];
    }
  return sum;
}


int main(){
  int n[10];
  int size;
  cout<<"enter the size of array in (10 )limit"<<endl;
  cin>>size;
  Insertelement(n,size);
  printelement(n,size);
  int sum = sumelement (n,size);
  cout<<endl;
  cout<<endl<<"sum of elemnts in array are ="<<sum<<endl;
  
  
}