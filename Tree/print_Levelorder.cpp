
#include <iostream> 
#include <queue> 
using namespace std; 

// A Binary Tree Node 
struct Node 
{ 
    int data; 
    struct Node *left, *right;
    Node(int data){
    	this->data=data;
    	left=right=NULL;
    }
    
}; 



// Function to print Level Order Traversal 
// of the Binary Tree
void printLevelOrder(struct Node *root) 
{ 
    // Base Case 
    if (root == NULL) return; 

    // Create an empty queue for 
    // level order tarversal 
    queue< Node *> q; 

    // Enqueue Root and initialize height 
    q.push(root); 

    while (q.empty() == false) 
    { 
        // Print front of queue and remove 
        // it from queue 
        struct  Node *node = q.front(); 
        cout << node->data << " "; 
        q.pop(); 

        /* Enqueue left child */
        if (node->left != NULL) 
            q.push(node->left); 

        /* Enqueue right child */
        if (node->right != NULL) 
            q.push(node->right); 
    } 
} 

// Driver Code 
int main() 
{ 
    // Create the following Binary Tree
    //      1
    //     / 
    //    2   3
    //   / 
    //  4   5
    
    struct  Node *root = new Node(1); 
    root->left = new Node(2); 
    root->right = new Node(3); 
    root->left->left = new Node(4); 
    root->left->right = new Node(5); 

    cout << "Level Order traversal of binary tree is"<<endl; 
    printLevelOrder(root); 
    
    return 0; 
} 
