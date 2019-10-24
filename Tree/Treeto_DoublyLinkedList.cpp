// A simple recursive function to convert a given Binary tree to Doubly
// Linked List
// root --> Root of Binary Tree
// head --> Pointer to head node of created doubly linked list
void BinaryTree2DoubleLinkedList(node *root, node **head)
{
    // Base case
    if (root == NULL) 
        return
 
    // Initialize previously visited node as NULL. This is
    // static so that the same value is accessible in all recursive
    // calls
    static node* prev = NULL
 
    // Recursively convert left subtree
    BinaryTree2DoubleLinkedList(root->left, head)
 
    // Now convert this node
    if (prev == NULL)
        *head = root
    else
    {
        root->left = prev
        prev->right = root
    }
    prev = root
 
    // Finally convert right subtree
    BinaryTree2DoubleLinkedList(root->right, head)
}