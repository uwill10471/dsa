#include<iostream>
using namespace std;
bool chkPalindrome(string& str,int i,int j){
  if(i>j)return true;
  if(str[i] != str[j]){
    return false;
    
  }else{
    return chkPalindrome( str,  i+1, j-1);
  }
  
}

int main(){
string str = "bob";
  bool ispaindrome = chkPalindrome(str,0,str.length()-1);
 if(ispaindrome)cout<<"it is a palindrome";
  else cout<<"it is not a palindrome";
  return 0;
}