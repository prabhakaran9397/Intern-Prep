void mirror(struct Node* node) 
{
     if(node == NULL) return;
     mirror(node->left);
     mirror(node->right);
     struct Node* c = node->left;
     node->left = node->right;
     node->right = c;
}