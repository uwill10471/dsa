#include <iostream>
using namespace std;
int main() {
 char ch;
 cout<<"enter any character ch";
 cin>>ch;
  int no = ch;
  for(int i = 48 ; i<58;i++)
  {
    if(i==no){
      cout<< ch <<"is a number";
     }
    
  }
  for(int i = 97 ; i<123;i++)
  {
    if(i==no){
      cout<< ch <<"is a lower case alphabet";
     } }
    for(int i = 65 ; i<91;i++)
  {
    if(i==no){
      cout<< ch <<"is upper case alphabet";
     } }
  return 0;
}