int fix(struct Node *node)
{
    if(!node) return 0;
    int c = node->data;
    node->data = fix(node->left)+fix(node->right);
    return node->data + c;
}
void toSumTree(struct Node *node)
{
    fix(node);
}