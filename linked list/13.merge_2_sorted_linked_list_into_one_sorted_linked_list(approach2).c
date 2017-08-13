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
	if(head1->data<head2->data)
	{
		struct node *temp;
		while(head2)
		{
			struct node *nodey,*nodey2;
			for(nodey=head1;nodey->data<head2->data && nodey->next;nodey=nodey->next)
			{
				temp=nodey;
			}
			if(nodey->data<head2->data)
			{
				nodey->next=head2;
				return head1;
			}
			// printf("nilesh%d\t%d\n",temp->data,head2->data);
			nodey2=head2;
			head2=head2->next;
			nodey2->next=temp->next;
			temp->next=nodey2;
			// printf("nil\n");
			
		}
		return head1;
	}
	else
	{
		struct node *temp;
		while(head1)
		{
			struct node *nodey,*nodey2;
			for(nodey=head2;nodey->data<head1->data && nodey->next;nodey=nodey->next)
			{
				temp=nodey;
			}
			if(nodey->data<head1->data)
			{
				nodey->next=head1;
				return head2;
			}
			// printf("nilesh%d\t%d\n",temp->data,head2->data);
			nodey2=head1;
			head1=head1->next;
			nodey2->next=temp->next;
			temp->next=nodey2;
			// printf("nil\n");
			
		}
		return head2;
	}
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

// time complexity ----------orderof(n*m)
// space complexity---------orderof(1)