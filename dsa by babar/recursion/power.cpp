#include<iostream>
using namespace std;

int power(int a, int pow){
if(pow==0)return 1;
  return a * power(a,pow -1);
}

int main(){
  int a;
  cin>>a;
  int pow;
  cin>>pow;
 int k = power(a,pow);
  cout<<k;
  return 0;
}