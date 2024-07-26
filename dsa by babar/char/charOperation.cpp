#include<iostream>
using namespace std;
void print(char ch[]){
    cout<<ch;
}
int main(){
  char ch[10];
  cin>>ch;
  int n = sizeof(ch)/sizeof(ch[0]);

  int count =0 ;
  int i=0;
  while(ch[i]!='\0'){
    count++;
    i++;
  }

  int s =0;

  int e =count-1;

  print(ch);
  while(s<e){
    swap(ch[s],ch[e]);
    cout<<"s="<<s<<endl;
    cout<<"e="<<e<<endl;
    s++;
    e--;


  }
print(ch);
}