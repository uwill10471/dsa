#include<iostream>
using namespace std;

int main(){
  int n[5] = {1,2,3,4,5} ;
  int size;
  int j[5];
  cout<<"enter size of array upto 5 = ";
  cin>>size;
  // making reverse of array
  for(int i = 0 ; i< size ; i++){
    j[size - i - 1] = n[i];
  }
  cout<<endl;

  //printing reverse
  cout<<"reverse of an array = " ;
  for(int jj =0 ; jj< size ; jj++){
    cout<<j[jj]<< " " ;
  }
  cout<<endl;

  return 0;
  
}
