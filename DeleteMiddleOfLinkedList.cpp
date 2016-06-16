struct Node* deleteMid(struct Node *head)
{
    if(!head || !head->next) return NULL;
    if(!head->next->next){
        head->next=NULL;
        return head;
    }
    struct Node *s = head;
    struct Node *f = head;
    for(; f && f->next; f=f->next->next, s=s->next);
    f = s->next;
    *s = *f;
    return head;
}