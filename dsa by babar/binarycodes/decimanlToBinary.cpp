#include<iostream>
#include <math.h>
using namespace std;

int main(){
  int n;
  int ans=0;
   cout<<"enter the value of n";
  cin>>n;
  int i =0;
  while(n != 0){
    int bit = n & 1;
    cout<<bit<<""<<n<<endl;
    ans = bit* pow(10,i)+ans;
    n=n>>1;
    i++;
  }
  cout<<"answer is "<<ans;
}
