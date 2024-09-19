#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node *next;
};

struct Node *newNode(int data) {
  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  if (node == NULL) {
    printf("here");
    exit(1);
  }
  node->data = data;
  node->next = NULL;
  return node;
}

void insert(int data, struct Node *head) {
  struct Node *node = newNode(data);
  struct Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = node;
}
void print(struct Node *head) {
  struct Node *temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  // printf("%d ", temp->data);
}

void insertAtPos(int data,int pos,struct Node* head){
  struct Node* temp = head;
  struct Node* node = newNode(data);
  
  if(pos == 1){
    head = node;
    node->next = temp;
  }
  while(pos>2){
    temp = temp->next;
    pos--;
  }
  node->next = temp->next;
  temp ->next= node;
}
void insertAtPos1(struct Node** head, int data) {
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->data = data;

    
    newNode->next = *head;

    
    *head = newNode;
}
int main() {
  struct Node *head = (struct Node *)malloc(sizeof(struct Node));
  head = newNode(1);
  insert(2, head);
  insert(5, head);
  insert(4, head);
  insert(67, head);
  insert(67, head);
  insert(75, head);
  insertAtPos(45,2,head);
  insertAtPos1(&head,43);

  print(head);

  
}

// write a pro to find the heighest common factor of two numbers
// count the total number of vowels and consonants in a string
// determine whether a string is palindrome or not
//write a prog to add two matrix 
//wap to determine whether two matrix are equal or not 
//find max and min occurin char in a string 
//their is a stair case with n steps we need to reach the top and we can either climb one step or two step at a time how many distinct we can reach the top of the stair the staircases
//wap to draw pascal traingle 

