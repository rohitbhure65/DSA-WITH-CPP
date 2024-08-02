#include<stdio.h>
#include<stdlib.h>

// Define the structure for a node in the binary tree
typedef struct Node{
    int data;
    struct Node *left;  // Pointer to the left child
    struct Node *right; // Pointer to the right child
} Node;

// Inorder Traversal: LEFT - ROOT - RIGHT
void inorderTraversal(struct Node *root){
    if(root==NULL) return;            // Base case: if the node is null, return
    inorderTraversal(root->left);     // Recursively traverse the left subtree
    printf("%d->", root->data);     // Print the data of the node
    inorderTraversal(root->right);    // Recursively traverse the right subtree
}

// Preorder Traversal: ROOT - LEFT - RIGHT
void preorderTraversal(struct Node *root){
    if(root==NULL) return;            // Base case: if the node is null, return
    printf("%d->", root->data);     // Print the data of the node
    preorderTraversal(root->left);    // Recursively traverse the left subtree
    preorderTraversal(root->right);   // Recursively traverse the right subtree
}

// Postorder Traversal: LEFT - RIGHT - ROOT
void postorderTraversal(struct Node *root){
    if (root==NULL) return;           // Base case: if the node is null, return
    postorderTraversal(root->left);   // Recursively traverse the left subtree
    postorderTraversal(root->right);  // Recursively traverse the right subtree
    printf("%d->", root->data);     // Print the data of the node
}

// Create a new node with the given data
struct Node* createNode(int data){
    struct Node* newNode = (struct Node *)malloc(sizeof(struct Node)); // Allocate memory for the new node
    newNode->data = data;         // Assign data to the new node
    newNode->left = NULL;         // Initialize left child as NULL
    newNode->right = NULL;        // Initialize right child as NULL
    return newNode;               // Return the new node
}

// Insert a node to the left of the given root node
struct Node* insertLeft(struct Node* root, int data){
    root->left = createNode(data); // Create a new node and insert it to the left
    printf("%d Insert on the left of the node\n", data);
    return root->left;             // Return the newly created left child node
}

// Insert a node to the right of the given root node
struct Node* insertRight(struct Node* root, int data){
    root->right = createNode(data); // Create a new node and insert it to the right
    printf("%d Insert on the right of the node\n", data);
    return root->right;             // Return the newly created right child node
}

int main(){
    struct Node *root = createNode(1); // Create the root node
    insertLeft(root, 1);               // Insert left child to the root node
    insertRight(root, 2);              // Insert right child to the root node
    insertLeft(root->left, 3);         // Insert left child to the left child of the root node
    insertLeft(root->right, 4);        // Insert left child to the right child of the root node

    printf("\nInorder traversal \n");
    inorderTraversal(root);            // Perform inorder traversal of the tree

    printf("\nPreorder traversal \n");
    preorderTraversal(root);           // Perform preorder traversal of the tree

    printf("\nPostorder traversal \n");
    postorderTraversal(root);          // Perform postorder traversal of the tree

    return 0;
}