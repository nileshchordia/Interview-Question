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

void reverse(struct node *p)
{
	if(p->next)
		reverse(p->next);
	printf("%d\n",p->data);
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
	printf("reverse list\n");
	reverse(head);

	return 0;
}