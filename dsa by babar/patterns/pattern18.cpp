#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"enter the value of n";
  cin>>n;
  int i =0;
  while(i<=n){
    // for space
 int j =1;
    while(j<=i){
      cout<<" ";
      j++;
    }
    // for number 
    int k =1;
    while(k<=n-i){
      cout<<i+1;
      k++;
    }
    cout<<endl;
    i++;
    
    
    
  }
  return 0;

}