#include<bits/stdc++.h>
using namespace std;

int main(){
  map<int,multiset<string>>m;
  int noofstu;
  cin>>noofstu;
  for(int i=0;i<noofstu;i++){
    int marks;
    string name;
    cin>>name>>marks;
    m[marks].insert(name);
  }

  // to reverse so to get max number
  auto it = --m.end();
  while(true){
    auto &name = (*it).second;
    int  marks = (*it).first;
    for(auto value : name){
      cout<<value<<" "<<marks<<endl;
    }
    if(it==m.begin()) break;
    it--;
  }
  return 0;
  
}