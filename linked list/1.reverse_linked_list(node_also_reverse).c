#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
}*head=NULL;

struct node *store;
void create()
{
	struct node *p=(struct node *)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&p->data);
	p->next=NULL;
	if(!head)
	{
		head=p;
		store=p;
	}
	else
	{
		store->next=p;
		store=p;
	}

}

void reverse(struct node **head_ref)
{
	struct node *prev,*curr,*next;
	prev=NULL;
	curr=*head_ref;
	while(curr)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	*head_ref=prev;
}

void display()
{
	struct node *temp=head;
	printf("display list\n");
	while(temp)
	{
		printf("%d\n",temp->data );
		temp=temp->next;
	}
}
int main(int argc, char const *argv[])
{
	create();
	create();
	create();
	create();
	create();
	create();
	display();
	printf("reverse linked list\n");
	reverse(&head);
	display();

	return 0;
}