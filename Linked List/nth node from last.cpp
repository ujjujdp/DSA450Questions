int getNthFromLast(Node *head, int n)
{
       // Your code here
       int c=1;
       Node *ptr=head;
       while(ptr->next!=NULL)
       {
           ptr=ptr->next;
           c++;
       }
       if(c<n)
        return -1;
       ptr=head;
       c=c-n;
       while(c--)
       {
           ptr=ptr->next;
       }
       return ptr->data;
}