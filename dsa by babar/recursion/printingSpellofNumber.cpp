#include<iostream>
using namespace std;
void print(int num){
  if(num == 0){
    return;
  }
  int digit = num%10;
  string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  num = num/ 10;

   print(num);
  cout<<arr[digit]<<" ";
return;

}


int main(){
int num = 413452;
print(num);
}