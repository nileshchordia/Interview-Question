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


int detectIntersectPoint(struct node *p,struct node *q,int n,int m)
{
	struct node *temp1,*temp2;
	struct node stack1[n],stack2[m];
	temp1=p;
	temp2=q;
	int i=0,j=0;
	while(temp1)
	{
		stack1[i].data=temp1->data;     //push into stack1
		i++;
		temp1=temp1->next;

	}
	while(temp2)
	{
		stack2[j].data=temp2->data;     //push into stack2
		j++;
		temp2=temp2->next;
	}
	while(i && j)
	{
		if(stack1[--i].data!=stack2[--j].data)	//pop from stack1 as well as stack2
			return stack1[++i].data;

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
	display(head1);
	display(head2);
	// printf("nilesh\n");
	createIntersect(head1,head2);
	// display(head1);
	// display(head2);
	printf("data of intersect node is %d\n",detectIntersectPoint(head1,head2,m,n));
	return 0;
}
// time complexity------orderof(n+m)
// space complexity------orderof(n+m)