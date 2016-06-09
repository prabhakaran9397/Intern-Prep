int getMiddle(struct Node *head)
{
   struct Node *curr;
   int n=0, i;
   for(curr=head; curr; curr=curr->next, n++);
   for(curr=head,i=0; i<n/2; curr=curr->next, i++);
   return curr->data;
}
