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

int isPallindrome(struct node *head)
{
	int i=0,n=4;                 //sizeofstack.........
	struct node stack[n],*temp=head;
	while(temp)
	{
		stack[i++].data=temp->data;
		temp=temp->next;
	}
	while(head)
	{
		if(stack[--i].data!=head->data)
			return -1;
		head=head->next;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	head=newnode(2);
	head->next=newnode(3);
	head->next->next=newnode(3);
	head->next->next->next=newnode(2);
	(!isPallindrome(head))?printf("it is Pallindrome\n"):printf("it is not Pallindrome\n");
	return 0;
}


// time complexity ----------orderof(n)
// space complexity ---------orderof(n)