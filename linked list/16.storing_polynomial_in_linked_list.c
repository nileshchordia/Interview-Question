#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	int power;
	struct node *next;
};

struct node* newnode(int i,int j )
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=i;
	temp->power=j;
	temp->next=NULL;
	return temp;
}

int main(int argc, char const *argv[])
{
	struct node *head=NULL;
// 8x^3-4x^2+2x+1;
	head=newnode(8,3);
	head->next=newnode(-4,2);
	head->next->next=newnode(2,1);
	head->next->next->next=newnode(1,0);
	// storePolynomial(head);
	while(head)
	{
		printf("%dx^%d\t",head->data,head->power);
		head=head->next;
	}
	return 0;
}