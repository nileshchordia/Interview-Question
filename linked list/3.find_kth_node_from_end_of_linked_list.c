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

void KthnodeFromEnd(struct node *head_ref,int k)
{
	struct node *p,*q;
	p=q=head_ref;
	for(int count=0;count<k;count++)
	{
		p=p->next;
	}
	while(p)
	{
		p=p->next;
		q=q->next;
	}
	printf("%d\n",q->data);
	
}


void display()
{
	struct node *temp=head;
	printf("display list\n");
	while(temp)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main(int argc, char const *argv[])
{
	int n,k;
	printf("enter number of nodes in linkedlist\n");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
			create();
	printf("Enter the kth value\n");
	scanf("%d",&k);
	display();
	printf("Kth node from end in linked list\n");
	KthnodeFromEnd(head,k);
	return 0;
}

// Time complexity-------orderof(n)
// space complexity-------orderof(1)