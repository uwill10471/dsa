
#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;

//constructor
Node(int data){
  this -> data = data;
  this -> next = NULL;

  
  
}
//destructor
~Node(){
  int value = this->data;
  //memory free
  if(this -> next != NULL){
    delete next;
    this -> next =NULL;
  }
  cout<<"memory is freed for value"<<value<<endl;
}
};
//insertion at head
void insertAtHead (Node* &head , int d){
  Node* temp = new Node(d);
  temp -> next = head;
  head = temp;
}
//printing values
void print(Node* &head){
  Node* temp =head;

  while(temp != NULL){
    cout<<temp -> data<<" ";
    temp = temp -> next;
  }
  cout<<endl;
}

//insert at end
void insertAtEnd(Node* &tail,int d){
  Node* temp = new Node(d);
  tail -> next = temp;
  tail = tail -> next;
  
  
}

//INSERT at a position
void insertAtPos(Node* &head,Node* &tail,int pos , int d){
  if(pos == 1){
    insertAtHead(head,  d);
    return;
  }
  Node* temp = head;
  int cnt = 1;

  //inserting at last position
if(temp -> next == NULL){
  insertAtEnd(tail,d);
  return;
}
  
  
  while(cnt < pos-1){
    temp = temp -> next;
    cnt++;
  }
  Node* nodeToInsert = new Node(d);
  nodeToInsert -> next = temp -> next;
  temp -> next = nodeToInsert;
}

//deleting at some position
void deleteNode(int pos,Node* &head){
  //delete first node
  if(pos == 1){
    Node* temp =head;
    head = head -> next;
    temp -> next = NULL;
    delete temp;
  }else{
    //deleting middle or end node
    Node* curr = head;
    Node* prev = NULL;

    int cnt =1;
    if(cnt<pos){
      prev =curr;
      curr = curr -> next;
      cnt++;
      
    }
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
  }
}

int main(){
Node* node1 = new Node(11);
Node* head = node1;
Node* tail = node1;

  // insert at start
  insertAtEnd(tail,12);
  //printing value
  print(head);
  insertAtEnd(tail,12);
  print(head);
  insertAtPos(head,tail,4,4);
  insertAtPos(head,tail,5,5);
   print(head);
}