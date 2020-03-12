#include <stdio.h>
#include <stdlib.h>
struct node
{ 
	int data;
	struct node* next;	
};
struct node* top=NULL;
struct node* last=NULL;
struct node* createnode(int data)
{
	struct node* t=(struct node*)malloc(sizeof(struct node));
	t->data=data;
	t->next=NULL;
	
}
void print() {
if(top==NULL)
return;
struct node* temp=top;
while(temp!=NULL)
{
    printf("%d\t",temp->data);
    temp=temp->next;
}
}
void push(int data) {
   struct node* newnode=createnode(data);
    if(top==NULL)
    {
        top=newnode;
        last=newnode;
        return;
    }
    last->next=newnode;
    last=newnode;
    return;
}
void pop(){
	if (top==NULL)
	{
		printf("khali ba bhar lin\n ");
		return;
	}
	else{
		struct node* t=top;
		top=t->next;
		free(t);
		return;
	}
}
int front(){
	if (top==NULL)
	{
		printf("khali\n");
		return -1;
	}
	else{printf("%d\n",top->data);
		return top->data;
	}
}
int main()
{
	push(34);
	push(35);
	push(46);
	front();
	pop();
	print();
	return 0;
}
