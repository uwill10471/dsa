#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"enter the value of n";
  cin>>n;
int i=1;
  while(i<=n){
    //for space
    int j=1;
    while(j<=n-i){
      cout<<" ";
      j++;
    }
    //for numbers
    int k=1;
    while(k<=i){
      cout<<k;
      k++;
    }
    //for 2nd part numbers
    int o =1;
    while(o<=i-1){
      cout<<i-o;
      o++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}