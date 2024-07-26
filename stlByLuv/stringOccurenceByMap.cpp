#include<bits/stdc++.h>

using namespace std;

int main()
{
map<string,int> m;
  int n;
  cin>>n;
  for(int i=0 ; i< n ; i++){
    string s;
    cin>>s;
    // m[s] = m[s] + 1
    // its like inserting value in map so it will result out the number of times same string occured
    m[s]++;
  }
  for(auto &it : m){
    cout<<it.first<<" "<<it.second<<endl;
  }

  
}
