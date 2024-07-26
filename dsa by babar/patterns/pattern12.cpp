#include<iostream>
using namespace std;

int main(){
  int n;
  
  cout<<"enter the value of n";
  cin>>n;
  int i =1;
  while(i<=n){
    int j =1;
    while(j<=n){
      char ch;
      ch = 64+j;// here is the difference from previous question
      cout<<ch;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}