#include<iostream>
using namespace std;

int main(){
  int a,b;
  int choice;
  
  cout<<"enter your choice \n 1. + \n 2. - \n 3. x \n 4. / \n"<<"1,2,3,4\n"<<endl;
  cin>>choice;
  cout<<"enter the value of a and b"<<endl;
  cin>>a>>b;
  switch(choice){
    case 1 : cout<<"addition ="<<a+b;
              break;
    case 2 : cout<<"sub ="<<a-b;
              break;
    case 3: cout<<"multiplication ="<<a*b;
              break;
    case 4: cout<<"divison ="<<a/b;
              break;
    default: cout<<"wrong choice";
      }
}