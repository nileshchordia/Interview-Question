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


struct node *middleNode(struct node *head)
{
	struct node *slowPtr,*fastPtr;
	slowPtr=fastPtr=head;
	while(fastPtr && fastPtr->next)
	{
		slowPtr=slowPtr->next;
		fastPtr=fastPtr->next->next;
	}
	return slowPtr;
}

int isPallindrome(struct node *head)
{
	struct node *temp=head;
	struct node *middle=middleNode(head);
	// printf(" ehd %d\n",middle->data);
	middle=reverse(middle);
	struct node *curr_node=middle;
	int value=0;
	while(head && curr_node)
	{
		if(curr_node->data!=head->data)
		{
			value=1;
			break;
		}
		head=head->next;
		curr_node=curr_node->next;
	}
	middle=reverse(middle);
	return (value==1)?-1:0;
}

int main(int argc, char const *argv[])
{
	head=newnode(2);
	head->next=newnode(3);
	head->next->next=newnode(5);
	head->next->next->next=newnode(3);
	head->next->next->next->next=newnode(2);
	(!isPallindrome(head))?printf("it is Pallindrome\n"):printf("it is not Pallindrome\n");
	return 0;
}


// time complexity ----------orderof(n)
// space complexity ---------orderof(1)