#include<iostream>
using namespace std;
int main(){
  int i=1,r=4;
  while(i<=r){
    int k= 1;
    while(k<=r){
    cout<<"*";
      k++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}