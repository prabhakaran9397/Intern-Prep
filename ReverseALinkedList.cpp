struct Node* reverse(struct Node *head)
{
  struct Node *curr = head;
  struct Node *prev = NULL;
  struct Node *next = NULL;
  while(curr){
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
  }
  return prev;
}