#include<iostream>
using namespace std;

void counting(int num){
if(num==0)return;

  counting(num-1);

  cout<<num;
}

int main(){
int num =5;
  counting(num);
  return 0;
}