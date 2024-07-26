//prog to find if the string is alredy gives and print yes

#include<bits/stdc++.h>
using namespace std;
int main(){
  unordered_set<string> s;
  int n;
  cin>>n;
  // inserting value
  for(int i =0 ; i<n;++i){
    string str ;
    cin>>str;
    s.insert(str);
  }

  // taking the query
  string query;
  cin>>query;
  int count =0;
  //chkin if query is present in set
  for(auto it = s.begin(); it!=s.end() ;it++){
    if((*it) == query){
   count++;}
  }
  cout<<count;

  //printing yes
   if(count!=0){
      cout<<"yes";
    }else{
      cout<<"no";
    }
  return 0 ;
}