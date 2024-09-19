#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
};

//queue syntax
struct Queue{
    
    struct Queue *front;
    struct Queue *rear;

};

struct Queue* createQueue(){
   
    struct Queue *front = -1;
    struct Queue *rear = -1;
    return front;
}

struct Node* newNode(int data){
    struct Node* node =(struct Node*)malloc(sizeof(struct Node));
    if(node == NULL){
        printf("Memory Allocation Failed");
    }

    node -> data = data;
    node -> next = NULL;
}

int main(){
    struct Queue* q = createQueue();
   
    
}