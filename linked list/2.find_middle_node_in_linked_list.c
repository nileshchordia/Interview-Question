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


void middleNode(struct node *head_ref)
{
	struct node *s,*f;
	s=f=head_ref;
	for(;f&&f->next;f=f->next->next,s=s->next);
		printf("%d\n",s->data);

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
	int n;
	printf("enter number of nodes in linkedlist\n");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
			create();

	display();
	printf("Middle node in linked list\n");
	middleNode(head);
	// display();

	return 0;
}

// Time complexity-------orderof(n)
// space complexity-------orderof(1)