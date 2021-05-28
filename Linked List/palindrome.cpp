bool isPalindrome(Node *head)
    {
        //Your code here
        Node* rev = reverse(head);
        Node* ptr1 = head;
        Node* ptr2 = rev;
        while(1)
        {
            if(ptr1 == NULL)
                break;
            // cout<<ptr1->data<<" "<<ptr2->data<<endl;
            if( ptr1->data != ptr2->data)
                return false;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return true;
    }