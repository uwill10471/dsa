#include <iostream>
using namespace std;
// LEACTURE 29
int main() {
  int row;
  cin>>row;

  int col;
  cin>>col;
  
  //creating 2d dynamic array
  int** arr = new int*[row];
  for(int i=0;i<row;i++){
    arr[i] = new int[col];
  }
//TAKING INPUT 
  for(int i=0 ;i<row;i++){
    for(int j=0;j<col;j++){
      cin>>arr[i][j];
    }
  }
//Printing 2d array 
  for(int i=0;i<row;i++){
    for(int j=0; j<col;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  
}