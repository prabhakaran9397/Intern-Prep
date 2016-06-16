int height(struct Node* node)
{
    if(!node) return 0;
    return max(height(node->left), height(node->right))+1;
}
int diameter(struct Node* node)
{
    if(!node) return 0;
    return max(	height(node->left)+height(node->right)+1,
             	max(diameter(node->left), diameter(node->right))
               	);
}