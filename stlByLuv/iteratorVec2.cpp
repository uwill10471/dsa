#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v ={ 2,3,4,5,6,7};
  //for(int i =0 ; i<v.size() ;i++){
   // cout<<v[i]<<" "; *\
 // }

  //or
  for(int value : v){
    cout<<value<<" ";
  }

  
  vector<pair<int,int>> vp = {{2,3},{4,5},{10,11}};
  vector<pair<int,int>> :: iterator it = vp.begin();
  //for(it =vp.begin() ; it!=vp.end();++it){
    //cout<<(*it).first<<" "<<(*it).second<<" "<<endl;
    //or
   //   cout<<it->first<<" "<<it->second<<" "<<endl;
 // }

  // or to print through iterator
  for(pair<int,int> value : vp){
    cout<<value.first<<""<<value.second;
  }

  
  return 0; 
}