#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter the value of n";
  cin>>n;
  int count =0;
  for(int i=2;i<n;i++){
    if(n%i==0){
      count++;
    }else if(n==1){
      break;
    }else{
      break;
    }
  }
  if(count==0&& n>1){
    cout<<n<<"is prime";
    
  }else{
    cout<<"not prime";
  }
}