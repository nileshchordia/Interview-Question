#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
}*head=NULL;



struct node *newnode(int data)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	return temp;
}


void println(struct node *head)
{
	while(head)
	{
		printf("%d\n",head->data);
		head=head->next;
	}
}

struct node * mergeSortOfTwoLL(struct node *head1,struct node *head2)
{
	struct node *result,*temp;
	if(head1->data>head2->data)
	{
		result=head2;
		temp=head2;
		head2=head2->next;
	}
	else
	{
		result=head1;
		temp=head1;
		head1=head1->next;
	}

	while(head1 && head2)
	{
		if(head1->data>head2->data)
		{
			temp->next=head2;
			temp=head2;
			head2=head2->next;
		}
		else
		{
			temp->next=head1;
			temp=head1;
			head1=head1->next;
		}

	}	
	if(head1)
		temp->next=head1;
	else
		temp->next=head2;
	return result;
}


int main(int argc, char const *argv[])
{
	struct node *head1=NULL,*head2=NULL;

	// Sorted LinkedList L1------------
	head1=newnode(1);
	head1->next=newnode(3);
	head1->next->next=newnode(5);

	// Sorted LinkedList L2------------
	head2=newnode(2);
	head2->next=newnode(4);
	head2->next->next=newnode(6);


	head=mergeSortOfTwoLL(head1,head2);
	println(head);
	return 0;
}

// time complexity ----------orderof(n+m)
// space complexity---------orderof(1)