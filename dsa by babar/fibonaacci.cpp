#include<iostream>
using namespace std;

int main(){
  int n ;
      int sum=0;
  cout<<"enter the value of n";
  cin>>n;
  int a =0;
  int b =1;
  cout<<a<<"+"<<b;
  while(n){
    

    sum=a+b;
    a=b;
    b=sum;
    
    n--;
    cout<<"+"<<sum;
  }
  
}