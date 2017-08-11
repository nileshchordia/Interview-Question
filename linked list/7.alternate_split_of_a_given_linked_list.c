#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
}*head=NULL;

struct node *store;
void create(struct node **q)
{
	struct node *p=(struct node *)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&p->data);
	p->next=NULL;
	if(!(*q))
	{
		*q=p;
		store=p;
	}
	else
	{
		store->next=p;
		store=p;
	}

}


void display(struct node *q)
{
	struct node *temp=q;
	printf("display list\n");
	while(temp)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}

void splitAlternateNodes(struct node *head, struct node **head1, struct node **head2)
{
	*head1 = head;	
	if(!head || !head->next)
		return;
	*head2 = head->next;
	struct node *temp;	
	while(head)
	{
		temp = head->next;
		head->next = temp ? temp->next: temp;  //heart of code-----
		head = temp;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	struct node *head1,*head2;
	printf("enter number of nodes for linkedlist \n");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
			create(&head);
	display(head);
	splitAlternateNodes(head,&head1,&head2);
	display(head1);
	display(head2);
	return 0;
}
// time complexity------orderof(n)
// space complexity------orderof(1)