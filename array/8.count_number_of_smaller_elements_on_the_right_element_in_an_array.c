#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *left;
	struct node *right;
}*head=NULL;




void createnode(int data)
{
	struct node *current_node;
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=data;
	if(head==NULL)
	{

		head=new_node;
		current_node=new_node;
	}
	else
	{
		struct node *temp=head;
		while(temp)
		{
			if(temp->data)
		}
		if(data>current_node->data)
		{
			current_node->right=new_node;
			current_node=new_node;
		}
		else
		{
			
			current_node->left=new_node;
			current_node=new_node;
		}
	}
}



void countSmallerElement(int *a,int n)
{
	for(int i=n-1;i>=0;i--)
	{
		createnode(a[i]);
	}
}



int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	countSmallerElement(a,n);
	return 0;
}