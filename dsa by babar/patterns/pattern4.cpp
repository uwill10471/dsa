#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"enter the value of n";
  cin>>n;
  int i =1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<n+1-j;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}

//j= 3,2,1
//
//n=3