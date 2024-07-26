#include<iostream>
using namespace std;
int main(){
  string s ="aNdhAsDF53424%$%##$#$#$FG";

  int n= 0;
  string s2 ;
  int i=0;
  int j=0;
  cout<<s;
 int count=0;
 
  while(s[n]!='\0'){
    
    if(s[i]>='a'&&s[i]<='z'){
      s2= s2+char(s[i]-32);
     //  cout<<s2[j];

     
    }else if(s[i]>='A'&&s[i]<='Z'){
      s2=s2+char(s[i]);
     //  cout<<s2[j];
      j++;
    }else if(s[i]>='0'&&s[i]<='9'){
      s2=s2+char(s[i]);
//cout<<s2[j];
      j++;
    }
    i++;
    n++;
   
  
 }
 
 //   cout<<i<<endl<<j<<endl<<n;
 cout<<s2.size();
 cout<<s2;
  int n2=s2.size()-1;
  int ui=0;
  bool k=1;
  while(ui<n2){
    if(s2[ui]!=s2[n2]){
      k=0;
      break;
    
    }
    
    ui++;
    n2--;
  }
  cout<<k;
 
  
}