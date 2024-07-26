#include<bits/stdc++.h>

using namespace std;

int main()
{
  map<int,string> m;
  m[0] ="abc";
  m.insert({1,"fgh"});
  m.insert({2,"fgg"});
  for(auto it = m.begin();it!=m.end();++it){
    cout<<it->first<<": "<<it->second<<endl;
  }
  return 0;
  
}
