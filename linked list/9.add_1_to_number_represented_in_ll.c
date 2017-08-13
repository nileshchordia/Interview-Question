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

struct node *reverse(struct node *head)
{
	struct node *prev=NULL,*next, *curr_node=head;
	while(curr_node)
	{
		next=curr_node->next;
		curr_node->next=prev;
		prev=curr_node;
		curr_node=next;
	}
	return prev;


}

struct node *addOneToLL(struct node *head)
{
	head=reverse(head);
	struct node *temp,*result=head;
	int carry=1,sum;
	while(head)
	{
		sum=head->data;
		sum+=carry;
		carry=(sum==10)?1:0;
		head->data=sum%10;
		temp=head;
		head=head->next;

	}
	if(carry>0)
	{
		temp->next=newnode(carry);
	}
	return reverse(result);

}

int main(int argc, char const *argv[])
{

	// number is 95999----------
	head=newnode(9);
	head->next=newnode(5);
	head->next->next=newnode(9);
	head->next->next->next=newnode(9);
	head->next->next->next->next=newnode(9);
	head=addOneToLL(head);
	printLn(head);
	return 0;
}

// time complexity ----------orderof(n)(n is digit of number)
// space complexity ---------orderof(1)