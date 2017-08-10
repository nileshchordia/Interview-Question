#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL;


struct node *store;
void create()
{
	struct node *p=(struct node *)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&p->data);
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


// hash table approach-----------
int checkLoop(struct node *current_node,int n)
{
	struct node hash[n];
	int count=0;
	while(current_node)
	{
		for(int i=0;i<count;i++)
		{
			if(current_node->data==hash[i].data)
				return 0;
		}
		hash[count].data=current_node->data;
		count+=1;
		current_node=current_node->next;
	}
}


int main(int argc, char const *argv[])
{
	int n,k;
	printf("enter number of nodes in linkedlist\n");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
			create();
	createLoop();
	if(!checkLoop(head,n))
		printf("it is loop in linkedlist\n");
	else
		printf("there is not loop in linkedlist\n");

	// display();
	return 0;
}
// time complexity------orderof(n)---in hash table we assume search and insert orderof(1)
// space complexity------orderof(n)