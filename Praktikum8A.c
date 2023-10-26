#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data)
{
    struct node *node = (struct node*)malloc(sizeof(struct node));
    
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void displayPreorder(struct node* node)
{
    if(node == NULL) 
        return;
        
    printf("%d ", node->data); //root
    displayPreorder(node->left); //subtree kiri
    displayPreorder(node->right); //subtree kanan
}

void displayInorder(struct node* node)
{
    if(node == NULL)
        return;
        
    displayInorder(node->left); //subtree kiri
    printf("%d ", node->data); //root
    displayInorder(node->right); //subtree kanan
}

void displayPostorder(struct node* node)
{
    if(node == NULL)
        return;
        
    displayPostorder(node->left); //subtree kiri
    displayPostorder(node->right); //subtree kanan
    printf("%d ", node->data); //root
}

int main()
{
struct node* root = newNode(8);
    
    root->left = newNode(3);
    root->left->right = newNode(1);
    root->left->left = newNode(6);
    root->left->right->right = newNode(4);
    root->left->right->left = newNode(7);
    
    root->right = newNode(10);
    root->right->left = newNode(14);
    root->right->left->right = newNode(13);
    
    displayPreorder(root);
    printf ("\n");
    displayInorder(root);
    printf ("\n");
    displayPostorder(root);
    printf ("\n");

    return 0;
}