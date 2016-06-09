bool isCircular(struct Node *head)
{
    if(!head)
        return 1;
    struct Node * temp = head;
    while(1){
        temp = temp->next;
        if(!temp)
            return 0;
        else if(temp==head)
            return 1;
    }
}