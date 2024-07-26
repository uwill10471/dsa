#include<iostream>
using namespace std;

int main()
{
  int n;
  int i =1;
  cout<<"enter the value of n";
  cin>>n;
  while(i<=n){
    int k=1;
    while(k<=n){
      cout<<k;
      k++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}