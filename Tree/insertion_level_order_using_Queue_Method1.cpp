#include <iostream>
#include<queue>
using namespace std;
struct Node{
    int data;
    struct Node *left,*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
 void printInorder(struct Node *root){
     if(root==NULL){
         return ;
     }
      printInorder(root->left);
      cout<<root->data<<" ";
      printInorder(root->right);
 }

 void insert(struct Node *root,int key)
   {
       queue<Node*> q;
       q.push(root);
       while (!q.empty())
       {
         Node* temp=q.front();
         q.pop();
         if(temp->left!=NULL){
             q.push(temp->left);
         }else{
             temp->left=new Node(key);
             break;
         }
         if(temp->right!=NULL){
             q.push(temp->right);
         }else{
             temp->right=new Node(key);
             break;
         }

       }
   }

int main(){
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    printInorder(root);
    cout<<endl;
    int key=14;
    insert(root,key);
     key=15;
    insert(root,key);
     key=16;
    insert(root,key);
     key=17;
    insert(root,key);
    printInorder(root);
    return 0;
}

