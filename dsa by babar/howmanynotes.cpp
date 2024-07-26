#include<iostream>
using namespace std;

int main(){
int n;
  cout<<"enter the total amount"<<endl;
  cin>>n;
  int note100,note50,note20,note10,note1,note;
  cout<<"enter the choice 100,50,20,10,1"<<endl;
  cin>>note;
  switch(note){
    case 100: note100 = n/100;
              cout<<"u require "<<note100<<" 100s note"<<endl;
               n =n-(note100*100);
    
    case 50: note50 = n/50;
              cout<<"u require "<<note50<<" 50s note"<<endl;
               n =n-(note50*50);
       
    case 20: note20 = n/20;
              cout<<"u require "<<note20<<" 20s note"<<endl;
               n =n-(note20*20);
       
    case 10: note10 = n/10;
              cout<<"u require "<<note10<<" 10s note"<<endl;
               n =n-(note10*10);
       
    case 1: note1 = n/1;
              cout<<"u require "<<note1<<" 1s note"<<endl;
               n =n-(note1*1);
       
    break;
    default: cout<<"wrong choice";
  }
  
}