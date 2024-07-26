#include <iostream>
using namespace std;
int main() {
  int n,sum=0,count=0;
  cin>>n;
  for(int i = 2 ; i<=n ;i++){
    if(i==n && count == 0){
      
      cout<<i<<"prime"<<count;
    }else if(n%i==0){
      count++;
      cout<<"not prime"<<count;
    }
  }
  
  return 0;
}