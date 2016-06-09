void rotate(struct node **head_ref, int k)
{ 
    struct node *cur = *head_ref;
    struct node *pre = *head_ref;
    struct node *temp = NULL;
    int n, i;
    for(n=0; cur; cur=cur->next, n++);
    if(k>0&&k<n){
        for(i=1, cur=*head_ref; i<k&&cur->next; cur=cur->next, i++);
        temp = cur;
        for(; temp->next; temp=temp->next);
        *head_ref = cur->next;
        temp->next = pre;
        cur->next = NULL;
    }
}