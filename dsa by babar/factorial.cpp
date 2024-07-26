#include<iostream>
using namespace std;

int fact(int n){
  int sum = 1;
  //finding factorial
  while(n!=0){
    sum = sum * n;
    n--;
  }
 return sum;
  
}

int main(){
  int a;
  cout<<"enter tha value of a "<<endl;
  cin>>a;

  int factVal= fact(a);
  
  cout<<"result ="<<factVal;
}