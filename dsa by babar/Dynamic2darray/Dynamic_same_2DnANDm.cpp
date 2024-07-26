#include <iostream>
using namespace std;
// LEACTURE 29
int main() {
  int n;
  cin>>n;
  //creating 2d dynamic array
  int** arr = new int*[n];
  for(int i=0;i<n;i++){
    arr[i] = new int[n];
  }
//TAKING INPUT 
  for(int i=0 ;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
//Printing 2d array 
  for(int i=0;i<n;i++){
    for(int j=0; j<n;j++){
      cout<<arr[i][j]<<"";
    }
    cout<<endl;
  }
  
}