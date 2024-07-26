// nesting of map , pair and vector 
#include<bits/stdc++.h>;
using namespace std;

int main(){
  map<pair<string,string> ,vector<int>> m ;
  // storing value
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
    {
      string fn,ln;
     int sizeOfvec;
     cin>>fn>>ln>>sizeOfvec;
      for(int j =0 ; j<sizeOfvec;j++){
        int x;
        cin>>x;
        m[{fn,ln}].push_back(x);
      } }

  // printing value
  for(auto &it : m){
    auto &fullname = it.first;
    auto &Veclist = it.second;
    cout<<fullname.first<<" "<<fullname.second<<endl;
     for(auto &value : Veclist){
       cout<<value<<" ";
     }
    cout<<endl;
  }
  return 0;
}