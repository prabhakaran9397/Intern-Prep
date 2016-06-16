/* Link list Node  
struct Node {
    int data;
    struct Node* next;
}; */

struct Node* New(int v)
{
    struct Node* n = (struct Node*)malloc(sizeof(n));
    n->next = NULL;
    n->data = v;
    return n;
}

struct Node* SortedMerge(struct Node* head1,  struct Node* head2)
{
    struct Node* head;
    if(head1 && head2){
        if(head1->data < head2->data){
            head = New(head1->data);
            head1 = head1->next;
        }else{
            head = New(head2->data);
            head2 = head2->next;
        }
    }else{
        if(head1){
            head = New(head1->data);
            head1 = head1->next;
        }else if(head2){
            head = New(head2->data);
            head2 = head2->next;
        }
    }
    struct Node* c = head;
    while(head1 && head2){
        if(head1->data < head2->data){
            c->next = New(head1->data);
            c = c->next;
            head1 = head1->next;
        }else{
            c->next = New(head2->data);
            c = c->next;
            head2 = head2->next;
        }
    }
    while(head1){
        c->next = New(head1->data);
        c = c->next;
        head1 = head1->next;
    }
    while(head2){
        c->next = New(head2->data);
        c = c->next;
        head2 = head2->next;
    }
    return head;
}