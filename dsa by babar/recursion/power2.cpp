#include<iostream>
using namespace std;

long long int power(int num ,int pow){
  if(pow==0)return 1;
  if(pow==1)return num;

  int ans = power(num,pow/2);
  if(pow%2 != 0){
    // odd power
    return num * ans* ans;
  }else{
// even power
    return ans * ans;
  }
    
  }


int main(){
 int num ;
  int pow ;

  cin>>num>>pow;
  long long int val = power(num,pow);
  cout<<val;
  return 0;
}