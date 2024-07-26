#include<iostream>
using namespace std;

class Human{
public: 
int age;
int weight;


public:
void speak(){
  cout<<"speaking";
}
};

class Animal{



public:
void bark(){
  cout<<"woof";
}
};

class Dog : public Animal , public Human{

};


int main(){
 Dog d;
  d.speak();
  d.bark();
  
  return 0;
}