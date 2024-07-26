#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;


int main() {
  //creatin map
  unordered_map<string,int> m;

  //insertion into the map
  //1st way
  pair<string,int> p = make_pair("anshu",1);
  m.insert(p);
  
  //2nd way
  pair<string,int>p2("nishu",2);
  m.insert(p2);

  //3rd way
  m["merra"] = 3;

  //updation
  m["merra"] =4;

  //search
  cout<< m["merra"];
  cout<<m.at("anshu");

  //cout<<m.at("unknownkey"); cause unexpected error of out of range in code
  cout<<m["unknownkey"]; //this type of entry make an entry of 0 if not exist

  cout<<m.at("unknownkey");

  // gettin size
  cout<<endl<<"size of map is -"<<m.size();

  // to check presence 
  cout<<endl<<m.count("bee"); // return 0 if no such entry exist 
  cout<<endl<<m.count("anshu"); // return 1 if an entry exist

  //erase
  m.erase("unknownkey");
  cout<<endl<<"size after erasing  is -"<<m.size();

  //traversing through the map
  for(auto i:m){
    cout<<i.first<<","<<i.second<<endl;
  }
cout<<endl;
  //traversal through iterator 
  unordered_map<string,int> :: iterator it = m.begin();
  while(it != m.end()){
    cout<<it->first<<","<<it->second<<endl;
    it++;
  }

  
}