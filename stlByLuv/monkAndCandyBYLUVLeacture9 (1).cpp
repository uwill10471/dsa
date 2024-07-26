// the monk and the candy problem hackerearth.com

// long long is used cause candies are of 10^10 and int can hold 10^9 (or chk on google)

#include<bits/stdc++.h>

using namespace std;
int main(){

  // taking test cases
  int t;
  cin>>t;
  while(t--){
    // n = no of candies bag
    // k represent min 
    // in 1 min or for 1 value of k only 1 bag can be consumed
        int n,k;
    cin>>n>>k;
    // multiset used cuz no of candies in bag can be same multiple times
    multiset<long long> bags;
    for(int i =0 ; i<n;i++){
      long long x;
      cin>>x;
      bags.insert(x);
    }
    long long total_candies=0;
    while(k--){
      // have to determine max candies an be eaten so the inserted candies of big are at end of multiset 
      auto last_it = (--bags.end());  
      // storing max candies for k times
      total_candies = total_candies +(*last_it);
      // divide by 2 cuz it was specified in question 
    bags.insert(*last_it/2);
      // removing consumed candies and adding max_candy/2 value as speified in question
    bags.erase(*last_it);
     
    }
   cout<<total_candies;
    
  }
  return 0;
}
