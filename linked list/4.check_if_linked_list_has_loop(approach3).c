#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data,v;
	struct node *next;
}*head=NULL;


struct node *store;
void create()
{
	struct node *p=(struct node *)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&p->data);
	p->v=0;
	p->next=NULL;
	if(!head)
	{
		head=p;
		store=p;
	}
	else
	{
		store->next=p;
		store=p;
	}

}


void display()
{
	struct node *temp=head;
	printf("display list\n");
	while(temp)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}


void createLoop()
{
	struct node *temp=head;
	while(temp->next)
	{
		temp=temp->next;
	}
	temp->next=head;
	// printf("%d\n",temp->next->data);
}



int checkLoop(struct node *current_node)
{
	while(current_node)
	{
		if(current_node->v==1)
			return 0;
		current_node->v=1;
		current_node=current_node->next;
	}
	return 1;
}


int main(int argc, char const *argv[])
{
	int n,k;
	printf("enter number of nodes in linkedlist\n");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
			create();
	createLoop();
	if(!checkLoop(head))
		printf("it is loop in linkedlist\n");
	else
		printf("there is not loop in linkedlist\n");

	// display();
	return 0;
}
// time complexity------orderof(n)
// space complexity------orderof(1)