#include <stdio.h>
#include <stdlib.h>



struct node 
{
	int data;
	struct node *random;
	struct node *next;
}*head=NULL;

struct node * newnode(int data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=temp->random=NULL;
	return temp;
}

// making linking using random pointers
void connectedRandomPtr(struct node *head)
{
	head->random=head->next->next;
	head->next->random=head->next->next->next;
	head->next->next->random=head->next;
	head->next->next->next->random=head;
}

void printList(struct node *head)
{
	while(head->next)
	{
		printf("%d\n",head->random->data);
		head=head->next;
	}
	printf("%d\n",head->random->data );
}


struct node* cloningList(struct node *p)
{
	struct node *head=NULL;
	struct node *temp=p,*curr_node;
	while(temp)
	{
		if(!head)
		{
			head=newnode(temp->data);
			curr_node=head;
		}
		else
		{
			curr_node->next=newnode(temp->data);
			curr_node=curr_node->next;
		}
		temp=temp->next;
	}
	return head;
}


void ptToRandomptr(struct node *head1,struct node *head2)
{
	struct node *nodey,*temp=head2;
	while(head1 && head2)
	{
		for(nodey=temp;nodey->data!=head1->random->data;nodey=nodey->next);
		head2->random=nodey;
		// printf("nil%d\n",head2->random->data );
		head2=head2->next;
		head1=head1->next;
	}
}


int main(int argc, char const *argv[])
{
	struct node *cloneNode;
	head=newnode(10);
	head->next=newnode(20);
	head->next->next=newnode(30);
	head->next->next->next=newnode(40);
	connectedRandomPtr(head);
	cloneNode=cloningList(head);
	ptToRandomptr(head,cloneNode);
	printf("linked list l1\n");
	printList(head);
	printf("linked list l2\n");
	printList(cloneNode);
	return 0;
}


// Time complexity  ----orderof(n**2)
// space complexity------orderof(1)