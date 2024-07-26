#include<iostream>
using namespace std;
int fact (int n){
  
  int ans= 1;
  while(n!= 0){
    ans =ans *n ;
    n--;
    
  }
  return ans;
}

int main(){
int n,r;
  cout<<"Enter the value of n \n";
  cin>>n;
  cout<<"enter the value of r \n";
  cin>>r;
  int n_r = n-r;
  int nCr = fact(n)/(fact(r)*fact(n_r));
  cout<<"value of nCr ="<<nCr;
  
  
}