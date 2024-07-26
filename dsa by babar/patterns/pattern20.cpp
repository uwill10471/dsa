#include<iostream>
using namespace std;

int main(){
  int n;
  int count=0;
  cout<<"enter tge value of n";
  cin>>n;
  int i=1;
  while(i<=n) {
    //for number
    int j=1;
    while(j<=n-i+1){
      cout<<j;
      j++;
    }
    //for star
    int k= 1;
    while(k<=i-1){
      cout<<"*";
      k++;
    }
    //for star in second part
    int o=1;
    while(o<=i-1){
      cout<<"*";
      o++;
    }
    //for number
    int y=1;
    while(y<=n-i+1){
      cout<<n-count-y+1;
      y++;
      
    }
    cout<<endl;
    i++;
    count++;
    
  }}

//#include<iostream>
// using namespace std;

// int main(){
//   int n;
//   int count=0;
//   cout<<"enter the value of n";
//   cin>>n;
//   int i =1;
//   while(i<=n){
//     //for space
//     int j=1;
//     while(j<=i-1){
//       cout<<" ";
//       j++;
//     }
//     //for number
//     int k =1;
//     while(k<=n-i+1){
//       cout<<n-count-k+1;
//       k++;

//     }
//     cout<<endl;
//     i++;
//           count++;
    
//   }
// }