#include<iostream>
using namespace std;

int setBits(int n){
  int countN =0;
  
  //set bit in n
 while(n!=0){
   int bit = n & 1;
   if(bit == 1){
     countN++;
   }
   n = n>>1;
   
 }

  return countN ;
  
}

int main(){
  int a,b;
  cout<<"enter tha value of a"<<endl;
  cin>>a;
  cout<<"enter tha value of b"<<endl;
  cin>>b;
  int setBitA = setBits(a);
  int setBitB = setBits(b);
  cout<<"total set bits are ="<<setBitA + setBitB;
}