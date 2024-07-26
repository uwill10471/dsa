#include<iostream>
using namespace std;

int fact(int a){
 if(a==0) return 1;

if(a>1){
//a = a * fact(a-1); 
return a * fact(a-1);
}
  return a;
}

int main(){
  int a;
  cin>>a;
 int k = fact(a);
  cout<<k;
  return 0;
}