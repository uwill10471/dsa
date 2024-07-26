#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v ={ 2,3,4,5,6,7};
  for(int i =0 ; i<v.size() ;i++){
    cout<<v[i]<<" ";
  }
  vector<int> :: iterator it = v.begin();
  //for(int j= 0; j<v.size() ; j++){
    //cout<<(*it+j);
  //}

  // another method to iterate through iterator
  for(it = v.begin(); it!=v.end();++it){
    cout<<(*it);
  }
  return 0;
}