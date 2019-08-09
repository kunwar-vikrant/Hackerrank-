Node* segregate(Node *head) {
    
     Node* temp=head;
     int m[3]={0};
                                     //to store count of 0 ,1 and 2 
    while(temp!=NULL)
    {
        m[temp->data]++;
        temp=temp->next;
    }
    
    temp=head;
    int i=0;
    
    while(temp!=NULL)
    {
        while(m[i]!=0)                               //till count does not become zero of a number(0,1 and 2)
                                                
        {
            temp->data=i;                           //keep assigning to data of node
            m[i]--;
            temp=temp->next;
        }
        i++;
    }
    return head;
    
}