/*Node* reverse(Node* head)
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
    
    long int LLtoNumber(Node* head)
    {
        Node *ptr = head;
        long int temp=0;
        while(ptr!=NULL)
        {
            temp = temp*10 + ptr->data;
            ptr = ptr->next;
        }
        return temp;
    }
    
    void InsertatBeg(Node* &head, int n)
    {
        if(head==NULL)
            head = new Node(n);
        else
        {
            Node* newNode = new Node(n);
            newNode -> next = head;
            head = newNode ;
        }
    }
    Node* numberToLL(long int n)
    {
        int rem;
        Node* head = NULL;
        while(n>0)
        {
            rem = n%10;
            n /= 10;
            InsertatBeg(head, rem );
        }
        return head;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // Node* reverseFirst = reverse(first);
        // Node* reverseSecond = reverse(second);
        if(first == NULL)
            return second;
        if(second == NULL)
            return first;
        long int a = LLtoNumber(first);
        long int b = LLtoNumber(second);
        long int addition = a + b;
        // cout<<a<<" "<<b<<" "<<addition<<endl;
        return numberToLL(addition);
    }*/



/*
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
    
    Node* addTwo(Node* first,Node* second,int n) 
    {
        int res = first->data + second->data + n ;
        Node* newNode = new Node(res % 10);
        int carry;
        if(res > 9)
            carry = 1;
        else 
            carry = 0;
        
        if(first->next != NULL && second->next != NULL)
        {
            newNode -> next = addTwo(first->next, second->next, carry);
            
        }
        else if(first -> next == NULL && second->next == NULL)
        {
            if(carry == 0)
                newNode->next = NULL;    
            else 
            {
                Node * anotherNewNode = new Node(carry);
                newNode -> next = anotherNewNode;
            }
        }
        
        else if(first -> next == NULL)
        {
            second ->next -> data += carry; 
            newNode -> next = second -> next;
        }
        else 
        {
            first ->next -> data += carry; 
            newNode -> next = first -> next;
        }
        return newNode;     
    }
  
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* reverseFirst = reverse(first);
        Node* reverseSecond = reverse(second);
        
        Node* head = addTwo(first,second,0);
        printList(head);
        return (head);
        // return reverseFirst;
    }
*/

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
    
    void insertAtBeg(Node* &head,int val)
    {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
  
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* reverseFirst = reverse(first);
        Node* reverseSecond = reverse(second);
        Node* ptrFirst = reverseFirst;
        Node* ptrSecond = reverseSecond;
        Node* head = NULL;
        int carry = 0;
        while(ptrFirst != NULL && ptrSecond != NULL)
        {
            int res = ptrFirst->data + ptrSecond->data + carry;
            if(res > 9)
                carry = 1;
            else 
                carry = 0;
            insertAtBeg(head,res%10);
            ptrFirst = ptrFirst->next;
            ptrSecond = ptrSecond->next;
        }
        while(ptrSecond!= NULL)
        {
            int res = carry +  ptrSecond->data;
            if(res > 9)
                carry = 1;
            else 
                carry = 0;
            insertAtBeg(head,res%10);
            ptrSecond = ptrSecond->next;
        }
        while(ptrFirst!= NULL)
        {
            int res = carry +  ptrFirst->data;
            if(res > 9)
                carry = 1;
            else 
                carry = 0;
            insertAtBeg(head,res%10);
            ptrFirst = ptrFirst->next;
        }
        if(carry)
        {
            insertAtBeg(head,carry);
        }
        return head;
        // return reverseFirst;
    }