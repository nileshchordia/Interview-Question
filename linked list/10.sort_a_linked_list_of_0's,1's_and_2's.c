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

void printLn(struct node *head)
{
	struct node *temp=head;
	while(temp)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}



void sortLinkedList(struct node *head)
{
	int count[]={0,0,0};
	struct node *temp=head;
	while(temp)
	{
		count[temp->data]+=1;
		temp=temp->next;
	}
	temp=head;
	int i=0;
	while(temp)
	{
		if(count[i]==0)
			i++;
		else
		{
			temp->data=i;
			count[i]--;
			temp=temp->next;
		}
	}
}


int main(int argc, char const *argv[])
{

	head=newnode(2);
	head->next=newnode(0);
	head->next->next=newnode(2);
	head->next->next->next=newnode(1);
	head->next->next->next->next=newnode(2);
	head->next->next->next->next->next=newnode(0);
	sortLinkedList(head);
	printLn(head);
	return 0;
}

// time complexity ----------orderof(n)
// space complexity ---------orderof(1)