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

int countNode(struct node *p)
{
	int i=0;
	while(p)
	{
		i++;
		p=p->next;
	}
	return i;
}
int _detectIntersectNode(int diff,struct node *p,struct node *q)
{
	for(int count=0;count<diff;count++)
	{
		p=p->next;
	}
	while(p&&q)
	{
		if(p->data==q->data)
			return p->data;
		p=p->next;
		q=q->next;
	}
}
int detectIntersectPoint(struct node *p,struct node *q,int n,int m)
{
	struct node *temp1,*temp2;
	int len1=countNode(p);
	int len2=countNode(q);
	int diff=abs(len2-len1);
	return (len2>len1)?_detectIntersectNode(diff,q,p):_detectIntersectNode(diff,p,q);
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
	display(head1);
	display(head2);
	// printf("nilesh\n");
	createIntersect(head1,head2);
	// display(head1);
	// display(head2);
	printf("data of intersect node is %d\n",detectIntersectPoint(head1,head2,m,n));
	return 0;
}
// time complexity------orderof(n+m)--means--orderof(max(m,n))
// space complexity------orderof(1)