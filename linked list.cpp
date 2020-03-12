#include<iostream>
#include<stdlib>

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;

        SinglyLinkedList() {
            this->head = nullptr;
        }

};
void printLinkedList(SinglyLinkedListNode* head) {
if(head==NULL)
return;
SinglyLinkedListNode* temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<endl;
    temp=temp->next;
}

}
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
        SinglyLinkedListNode* t=head;
        SinglyLinkedListNode* newnode=new SinglyLinkedListNode(data);
        if(t==NULL){
            head=newnode;
        return head;}
        while(t->next!=NULL)
        t=t->next;
        t->next=newnode;
        return head;


}
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* newnode=new SinglyLinkedListNode(data);
    if(llist==NULL)
    {
        llist=newnode;
        return llist;
    }
    newnode->next=llist;
    llist=newnode;
    return llist;


}
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* temp=new SinglyLinkedListNode(data);
    SinglyLinkedListNode* t=head;
    if(t==NULL)
    {
        head=temp;
        return head;
    }
    for(int i=0;i<position-1;i++)
     t=t->next;
     temp->next=t->next;
     t->next=temp;
     return head;
}
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* t=head;
    if(head==NULL)
    return head;
    if (position==0)
    {
        t=t->next;
        return head->next;
    }
    for(int i=0;i<position-1;i++)
    t=t->next;
    t->next=t->next->next;
    return head;

}
void reversePrint(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* t=head;
    if(head==NULL)
    return;
    int a[1000],i=0;

    while(t!=NULL)
    {
        a[i]=t->data;

        t=t->next;
        i++;
    }
    for(int j=i-1;j<=0;j--)
    cout<<a[j]<<endl;
}
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    if(head==NULL)
    return -1;
    int index = 0;
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* result = head;
    while(current!=NULL)
    {
        current=current->next;
        if (index++>positionFromTail)
        {
            result=result->next;
        }
    }
    return result->data;

}
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    if(head==NULL)
    return -1;
    int index = 0;
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* result = head;
    while(current!=NULL)
    {
        current=current->next;
        if (index++>positionFromTail)
        {
            result=result->next;
        }
    }
    return result->data;

}
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
if(head==NULL|| head->next==NULL)
        return head;
        else
        {
       SinglyLinkedListNode *current=head;
        while(current->next!=NULL)
            {
            if(current->data!= current->next->data)
            current=current->next;
            else
               {
               //delete current->next;
               current->next=current->next->next;
               }
        }
            return head;
    }
}

