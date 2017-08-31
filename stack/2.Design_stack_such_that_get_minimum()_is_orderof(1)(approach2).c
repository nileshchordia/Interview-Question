#include <stdio.h>

int stack[10];
int top=0,current_min=0;


void push(int data)
{
	
	if(top==0)
	{
		stack[top]=data;
		current_min=data;
	}
	else
	{
		if(current_min<data)
			stack[top]=data;
		else
		{
			stack[top]=data-current_min;
			current_min=data;
		}

	}
	top++;
}

int pop()
{
	top--;
	int v;
	if(current_min>stack[top])
	{	
		v=current_min;
		current_min=current_min-stack[top];
	}
	else
	{
		v=stack[top];
	}
	return v;
}


int findMin()
{
	return current_min;
}

int main(int argc, char const *argv[])
{

	push(10);
	printf("%d\n",findMin());
	push(20);
	printf("%d\n",findMin());
	push(5);
	// pop();
	printf("%d\n",findMin());
	push(4);
	printf("%d\n",findMin());
	push(2);
	printf("%d\n",findMin());
	push(1);
	printf("%d\n",findMin());
	return 0;
}

// Time complexity ---push=orderof(1)---pop=orderof(1)--get_Min--orderof(1)
// space complexity-----------orderof(1)