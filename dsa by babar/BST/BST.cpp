#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* left;
Node* right;

Node(int d){
  this->data = d;
  this->left=NULL;
  this->right=NULL;
    }


};

void inorder(Node* root){
  if(root == NULL){
    return;
  }
  inorder(root ->left); //L
  cout<<root->data<<" "; //N
  inorder(root->right);//R

}

int preorder(Node* root)
bool preorder(Node* root,int x){
  if (root == NULL)
  {
    return false;
  }

  if(root->data== x){
    return true;
  }  // N
  preorder(root->left);      // L
  preorder(root->right);     // R
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
Node* insertIntoBst(Node* &root, int d){
  //base case
  if(root ==NULL){
    root = new Node(d);
    return root;
  }
  if(d >root -> data){
    //right part mai insert kar do
    root -> right = insertIntoBst(root->right,d);
    
  }else{
    root->left = insertIntoBst(root->left,d);
  }
  return root;
}

void takeInput(Node* &root){
  int data;
  cin>>data;
  while(data != -1){
   root = insertIntoBst(root,data);
    cin>>data;
  }
}

Node* minVal(Node* root){
  Node* temp= root;
  while(temp->left !=NULL){
    temp = temp -> left;
  }
  return temp;
}
Node* maxVal(Node* root){
  Node* temp = root;
  while(temp->right !=NULL){
    temp = temp->right;
  }
  return temp;
}

int main(){
  Node* root =NULL;
  cout<<"enter data to create bst(put -1 to end to take data)"<<endl;

  takeInput(root);
  levelOrderTraversal(root);
 Node* min = minVal(root);
  cout<<endl<<min->data;
Node* max = maxVal(root);
  cout<<endl<<max->data;
  int x;
  
  cout<<"enter value of x";
  cin>>x;
  bool k = preorder(root,x);
  if(k==1){
    cout<<"Present";

  }else{
    cout<<"Not Present";
  }

 int height = 0;
 int h = preorder(root,height);


  return 0;
}