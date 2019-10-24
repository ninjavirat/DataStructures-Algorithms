
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;
    cout << node->data<<" ";
    printPreorder(node->left); 
    printPreorder(node->right);
} 
// Construct the Tree
    //       1
    //     /   /
    //    2     3
    //   / \   /  \ 
    //  4   5  6   7
void leftview(struct Node *root){
    if(root==NULL){
        return ;
    }
    struct Node* temp; 
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {   
    temp=q.front();
    if(temp){
        cout<<temp->data<<" ";
        while(temp)
        {
            if(temp->left){
              q.push(temp->left);
            }
            if(temp->right){
              q.push(temp->right);
            }
            
            q.pop();
            temp=q.front();
        }
        q.push(NULL);
    }
     q.pop();
    
  }
    
}

// Driver Code
int main()
{
    struct Node *root = new Node(1);
    root->left    = new Node(2);
    root->right    = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5); 
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << "Preorder traversal of binary tree is\n";
    printPreorder(root);
    cout<<endl;
    leftview(root);
    return 0;
}
