#include<iostream>
using namespace std;

int main()
{
int n;
  cout<<" enter the value of n";
  cin>>n;
  int i=1;
  int count=1;
  while(i<=n){
    int k=1;
    while(k<=n){

      cout<<count;
      count++;
      k++;
    }
    cout<<endl;
    i++;
  }
  return 0;  
}

