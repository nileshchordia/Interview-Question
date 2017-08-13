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

struct node *reverse(struct node *head)
{
	struct node *prev=NULL,*curr_node=head,*next;
	while(curr_node)
	{
		next=curr_node->next;
		curr_node->next=prev;
		prev=curr_node;
		curr_node=next;
	}
	return prev;
}

int isPallindrome(struct node *head)
{
	struct node *head1=NULL,*curr_node,*temp=head;
	while(temp)
	{
		if(!head1)
		{
			head1=newnode(temp->data);
			curr_node=head1;
		}
		else
		{
			curr_node->next=newnode(temp->data);
			curr_node=curr_node->next;
		}
		temp=temp->next;
	}
	head1=reverse(head1);
	while(head && head1)
	{
		if(head1->data!=head->data)
			return -1;
		head=head->next;
		head1=head1->next;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	head=newnode(2);
	head->next=newnode(3);
	head->next->next=newnode(3);
	head->next->next->next=newnode(2);
	(!isPallindrome(head))?printf("it is Pallindrome\n"):printf("it is not Pallindrome\n");
	return 0;
}


// time complexity ----------orderof(n)
// space complexity ---------orderof(n)