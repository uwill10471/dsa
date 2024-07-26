#include<iostream>
using namespace std;

class Animal{
public: 
int age;
int weight;


public:
void speak(){
  cout<<"speaking";
}
};

class Dog : public Animal{

};


int main(){
  Dog d;
  d.speak();
  
  return 0;
}