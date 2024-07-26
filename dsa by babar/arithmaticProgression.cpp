#include<iostream>
using namespace std;
int arithmatic(int n){
  return 3*n+7;
}

int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  int ap = arithmatic(n);
  cout<<"result ="<<ap;
  return 0;
}