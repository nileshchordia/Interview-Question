#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
}*head1=NULL;


struct node *head2=NULL;


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

void createIntersect(struct node *p,struct node *q)
{
	struct node *temp=p;
	while(temp->next)
	{
		temp=temp->next;
	}
	temp->next=q->next->next->next;
}

int detectIntersectPoint(struct node *p,struct node *q)
{
	while(p)
	{
		struct node *temp=q;
		while(temp)
		{
			if(p==temp)
				return p->data;
			temp=temp->next;
		}
		p=p->next;
	}

}

int main(int argc, char const *argv[])
{
	int n,m;
	printf("enter number of nodes for linkedlist L1\n");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
			create(&head1);
	printf("enter number of nodes for linkedlist L2\n");
	scanf("%d",&m);
	for (int i = 0; i < m; ++i)
			create(&head2);
	// display(head1);
	// display(head2);
	createIntersect(head1,head2);
	printf("data of intersect node is %d\n",detectIntersectPoint(head1,head2));
	return 0;
}
// time complexity------orderof(n*m)
// space complexity------orderof(1)