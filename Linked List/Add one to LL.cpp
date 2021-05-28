Node* reverse(Node* head)
    {
        if(head == NULL || head->next == NULL)
            return head;
        Node* prev= NULL;
        Node* curr= head;
        Node* nest=head->next;
        while(curr!=NULL)
        {
            curr->next = prev;
            prev=curr;
            curr=nest;
            if(!(nest==NULL))
                nest=nest->next;
        }
        head = prev;
        return head;
    }
    Node *ADDONE(Node* head)
    {
        
        if(head->data <9)
        {
            head->data ++;
            return head;
        }
        else if(head->data = 9 && head->next==NULL)
        {
            head->data=0;
            head->next = new Node(1);
            return head;
        }
        head->data=0;
        head->next = ADDONE(head->next);
        return head;
    }
    Node* addOne(Node *head) 
    {
        Node* reverseHead = reverse(head);
        Node* ptr = reverseHead;
        Node* res = ADDONE(reverseHead);
        return reverse(res);
    }