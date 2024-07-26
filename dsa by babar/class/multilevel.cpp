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
//first level
class Dog : public Animal{

};
//multi level
class GermanShephered : public Dog{

};

int main(){
  GermanShephered d;
  d.speak();
  
  return 0;
}