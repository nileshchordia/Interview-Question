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
	temp->next=head->next->next;
	// printf("nilesh %d\n",temp->next->data);
}



struct node * findStartofNodeInLoop(struct node *current_node)
{
	struct node *s,*f;
	s=f=current_node;
	int loopexists=0;
	while(s&&f&&f->next)
	{

		// printf("%d\t%d\n",s->data,f->data );
		s=s->next;
		f=f->next->next;
		if(s==f)
		{
			loopexists=1;
			break;
		}
	}
	// printf("%d\n",f->data);
	if(loopexists)
	{
		for(s=current_node;s!=f;s=s->next,f=f->next);
			return s;
	}
	return NULL;
}


int main(int argc, char const *argv[])
{
	int n,k;
	printf("enter number of nodes in linkedlist\n");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
			create();
	createLoop();
	struct node *temp=findStartofNodeInLoop(head);
	printf("Data of starting node of cycle %d\n",temp->data);

	// display();
	return 0;
}
// time complexity------orderof(n)
// space complexity------orderof(1)