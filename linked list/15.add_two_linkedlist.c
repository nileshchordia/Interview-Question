#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node * newnode(int data)
{
	struct node *p=(struct node*)malloc(sizeof(struct node));
	p->data=data;
	p->next=NULL;
	return p;
}

struct node * reverse(struct node *currentnode)
{
	struct node *prev=NULL,*next;
	while(currentnode)
	{
		next=currentnode->next;
		currentnode->next=prev;
		prev=currentnode;
		currentnode=next;
		// printf(" nil%d\n",(*currentnode)->data );

	}
	return prev;
}
void addLinkedList(struct node *p,struct node*q)
{

	p=reverse(p);
	q=reverse(q);
	struct node *test=q;
	int carry=0,sum;
	struct node *temp;
	while(p && q)
	{
		temp=q;
		sum=p->data+q->data+carry;
		// printf("sum %d\n",sum );
		carry=0;
		if(sum>=10)
			carry=1;
		
		sum=sum%10;
		q->data=sum;
		q=q->next;
		p=p->next;

	}
	if(carry>0)
		temp->next=newnode(carry);
	reverse(test);


}

int main(int argc, char const *argv[])
{
	struct node *head=NULL,*head2=NULL;
	head=newnode(4);
	head->next=newnode(5);
	head->next->next=newnode(6);
	head->next->next->next=newnode(8);

	head2=newnode(5);
	head2->next=newnode(2);
	head2->next->next=newnode(1);
	head2->next->next->next=newnode(2);


	addLinkedList(head,head2);


	struct node *temp=head2;
	while(temp)
	{
		printf("%d\t",temp->data );
		temp=temp->next;
	}
	return 0;
}