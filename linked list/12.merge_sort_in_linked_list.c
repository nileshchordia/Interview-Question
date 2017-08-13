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


struct node *middleNode(struct node *head)
{
	struct node *slowPtr,*fastPtr;
	slowPtr=fastPtr=head;
	while(fastPtr && fastPtr->next)
	{
		fastPtr=fastPtr->next->next;
		slowPtr=slowPtr->next;
	}
	return slowPtr;
}


struct node * mergeSortLinkedList(struct node *head)
{
	struct node *middle=middleNode(head);
	

}


int main(int argc, char const *argv[])
{
	head=newnode(5);
	head->next=newnode(3);
	head->next->next=newnode(1);
	head->next->next->next=newnode(10);
	head->next->next->next->next=newnode(8);
	head->next->next->next->next->next=newnode(4);
	// println(head);
	head=mergeSortLinkedList(head);
	return 0;
}