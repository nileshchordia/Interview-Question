#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next,*arb;
}*head=NULL;



struct node *newnode(int data)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=temp->arb=NULL;
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



void println(struct node *head)
{
	while(head->next)
	{
		// if(head->arb)
		// 	printf("%d\n",0);
		printf("%d\n",head->arb->data);
		head=head->next;
	}
	printf("%d\n",0);
}

void greatestValue(struct node *head)
{
	head=reverse(head);
	struct node *max_node=head;
	struct node *temp=head->next;
	// head->
	while(temp)
	{
		temp->arb=max_node;
		if(max_node->data<temp->data)
			max_node=temp;
		temp=temp->next;
	}
	head=reverse(head);
}


int main(int argc, char const *argv[])
{
	head=newnode(2);
	head->next=newnode(1);
	head->next->next=newnode(8);
	head->next->next->next=newnode(3);
	greatestValue(head);
	println(head);
	return 0;
}


// time complexity ----------orderof(n)
// space complexity ---------orderof(1)