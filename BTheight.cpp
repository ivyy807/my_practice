//Hacker Rank
//Tree: Height of a Binary Tree
#include <bits/stdc++.h>

using namespace std;

class Node {
public: 
int data;
Node *left;
Node *right;
  
Node(int d) {
  
data = d;
left = NULL;
right = NULL;
  
}
};


class Solution {
public:
Node* insert(Node* root, int data) {
if(root == NULL) {
  return new Node(data);
} else {
  Node* cur;
  if(data <= root->data) {
    cur = insert(root->left, data);
    root->left = cur;
  } else {
    cur = insert(root->right, data);
    root->right = cur;
  }
  return root;
 }
}

//my solution is here
int height(Node* root) {
  if (root == nullptr) {
      return -1;
    }
    return 1 + max(height(root->left) , height(root->right));
    }
};
