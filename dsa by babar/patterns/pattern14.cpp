#include<iostream>
using namespace std;

int main(){
int n;
  cout<<"enter the value of i";
  cin>>n;
  int i =1;

  while(i<=n){
    int k=1;
    while(k<=i){
        char ch ;
      ch = 64+i;
      cout<<ch;
      k++;
      
    }
    cout<<endl;
    i++;
  }

  
  return 0;
}