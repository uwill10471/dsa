#include<iostream>

using namespace std;

//inserting ele
void insertEle(int n[] , int size){
  cout<<"eneter the elements  = "<< endl;
  for(int i= 0 ; i< size ; i++){
    cin>>n[i];
  }
  cout<<endl;
}

//swapping
void swapp(int n[] , int size){
  cout<<" swapping initialized . . . ."<<endl;
  int start = 0;
  int end = 1;
  while ( end<size){
    
  cout<<"end = "<<end<<" start ="<<start;
    if(end<=size){
   swap(n[start],n[end]);
   start = start + 2;
   end = end + 2 ;}
   
    }
 
  
  cout<<endl;
}
//printing swapped 
void printswapp(int n[] , int size){
  cout<<"printing swapped values = "<<endl ;
  for(int i =0 ; i<size ; i++){
    cout<<n[i];
  }
}
int main(){
int n[11] , size;
cout<<"enter the size upto 10 = "<<endl;
cin>>size;
insertEle(n,size);
swapp(n,size);
printswapp(n,size);
  
return 0;
  
}
