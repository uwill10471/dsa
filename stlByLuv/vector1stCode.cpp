#include<bits/stdc++.h>
using namespace std;

// code to print vector
void printVec(vector<int>v){
  for(int i=0;i<v.size();++i){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

int main(){
  vector<int> v;
  cout<<"enter the size of vector";
  int n;
  cin>>n;
  //taking input
  for(int i=0;i<n;i++){
    cout<<"i="<<i<<endl;
    int x;
    cin>>x;
    v.push_back(x);
     }
  printVec(v);
  
  
}
