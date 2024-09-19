#include<iostream>
using namespace std;


// class TrieNode {
// public:
//  TrieNode* children[26];
//  char data;
//  bool isEndOfWord;

// TrieNode(string d){
  
//   for(int i= 0; i<26;i++){
//     children[i] = NULL;
//   }
//   isEndOfWord = false;
// }


// };

class TrieNode {
public:
    bool endofWord;
    TrieNode* children[26];

    // Constructore to initialize a trie node
    TrieNode()
    {
        endofWord = false;
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
    }
};

class Trie{
private:
 TrieNode* root;
public:
Trie() { root = new TrieNode(); }

void insert(string s){
  TrieNode* node = root;
   for(auto c: s){
     int index = c-'a';
     if(!node->children[index]){
       node->children[index] = new TrieNode();
     }
        node = node->children[index];
     
   }
  node->endofWord = true;
}

bool search(string word){
  TrieNode* node = root;
  for(auto c: word){
    if(node->children[c-'a']){
      node = node->children[c-'a'];
    }else{
      return false;
    }
  }
  return node->endofWord;
}

bool searchPrefix(string prefix){
  TrieNode* node = root;
  for(auto c: prefix){
    if(!node->children[c-'a']){
      return false;
    }
    node = node->children[c-'a'];
  }
  return true;
}

void deleteNode(string word){
  TrieNode* node = root;
  for(auto c: word){
    if(!node->children[c-'a']){
      return;
    }
   node = node -> children[c-'a'];
  }
  if(node->endofWord == true){
    node->endofWord = false;
  }
}
// Function to print the trie
  void print(TrieNode* node, string prefix) const
  {
      if (node->endofWord) {
          cout << prefix << endl;
      }
      for (int i = 0; i < 26; i++) {
          if (node->children[i]) {
              print(node->children[i],
                    prefix + char('a' + i));
          }
      }
  }

  // Function to start printing from the root
  void print() const { print(root, ""); }
};



int main(){
Trie trie;
  trie.insert("addddf");
  trie.insert("addfhh");
  trie.insert("anshu");
  trie.insert("sinh");
  cout<< trie.search("addddf")<<endl;
  trie.print();
  cout<<trie.searchPrefix("add")<<endl;
  trie.deleteNode("addddf");
  cout<< trie.search("addddf")<<endl;
  return 0;
}