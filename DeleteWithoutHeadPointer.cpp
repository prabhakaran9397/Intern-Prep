void deleteNode(Node *node)
{
   Node *p = NULL;
   while(node->next){
        p = node;
        node->data = node->next->data;
        node = node->next;
   } p->next=NULL;
}