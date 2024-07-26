#include<iostream>
#include<bits/stdc++.h>>
using namespace std;

class Node{
public:
int data;
Node* left;
Node* right;

Node(int d){
  this -> data = d;
  this -> left =NULL;
  this -> right = NULL;
  
}
};

//function to build tree
Node* buildTree(Node* root){
  cout<<"enter the data for node"<<endl;
  int data;
  cin>>data;
  root = new Node(data);
  if(data == -1){
    return NULL;
  }
  cout<<"enter the data for insertin in left of"<<data<<endl;
  root->left = buildTree(root->left);
  cout<<"enter data for insertin in right of"<<data<<endl;
  root -> right = buildTree(root->right);
  return root;
}

void levelOrderTraversal(Node* root){
  queue<Node*> q;
  q.push(root);
  q.push(NULL); //seprator
  while(!q.empty()){
    Node* temp = q.front();
    
    q.pop();
//seprator
    if(temp == NULL){
      //purana level complete ho chuka hai
      cout<<endl;
      if(!q.empty()){ // q hv child node
       //seprator
        q.push(NULL);
        
      }
    }else {
      cout<<temp->data<<" ";
 // temp->left true than
    if(temp->left){
      q.push(temp->left);
    }
// temp-> riht true than
    if(temp->right){
      q.push(temp->right);
    }
    }
  }
}

void inorder(Node* root){
  if(root == NULL){
    return;
  }
  inorder(root ->left); //L
  cout<<root->data<<" "; //N
  inorder(root->right);//R
  
}

void preorder(Node* root){
  if(root == NULL){
    return;
  }

  cout<<root->data<<" "; //N
  preorder(root ->left); //L
  preorder(root->right);//R

}
void postorder(Node* root){
  if(root == NULL){
    return;
  }

 
  postorder(root ->left); //L
  postorder(root->right);//R
  cout<<root->data<<" "; //N

}
//reheck or write again
void buildFromLevelOrder(Node*  &root){
  queue<Node*> q;
  cout<<"enter the data for root"<<endl;
  int data;
  cin>>data;
  root = new Node(data);
  q.push(root);
  
  while(!q.empty()){
    
    Node* temp = q.front();
    q.pop();

    
    cout<<"enter left node for: "<<temp->data<<endl;
 int leftData;
    cin>>leftData;
    if(leftData != -1){
      temp->left = new Node(leftData);
      q.push(temp->left);
    }

    cout<<"enter riht node for: "<<temp->data<<endl;

    int rightData;
    cin>>rightData;
    if(rightData != -1){
      temp->left = new Node(rightData);
      q.push(temp->right);
    }

    
  }
}


int main(){
  Node* root = NULL;

 buildFromLevelOrder(root);
  
  //root = buildTree(root);
  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

  // //level order
  // cout<<"printing the level order"<<endl;
  // levelOrderTraversal(root);

  // //inorder
  // cout<<"inorder traversal"<<endl;
  // inorder(root);

  // //preorder
  // cout<<"preorder traversal"<<endl;
  // preorder(root);

  // //postorder
  // cout<<"postorder traversal"<<endl;
  // postorder(root);
} 