bool fix(struct Node* root, int mi, int ma)
{
    if(!root) return 1;
    if(root->data<mi || root->data>ma) return 0;
    return fix(root->left, mi, root->data-1)&fix(root->right, root->data+1, ma);
}
bool isBST(struct Node* root)
{
    return fix(root, INT_MIN, INT_MAX);
}