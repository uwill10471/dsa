#include<iostream>
#include<bitset>
using namespace std;

int main(){
  int a;
  cout<<"enter the value of a";
  cin>> a;
  bitset<32> x(a);
  cout<<"binary of "<<a<<endl;
  cout<<x;
  a=123;
    bitset<32> y(a);
  cout<<"binary of "<<a<<endl;
  cout<<y;
  


}