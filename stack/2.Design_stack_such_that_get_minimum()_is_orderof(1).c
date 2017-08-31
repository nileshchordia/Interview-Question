#include <stdio.h>

int stack1[10];
int stack2[10];
int top=0;


void push(int data)
{
	stack1[top]=data;
	if(top==0)
	{
		stack2[top]=stack1[top];
	}
	else
	{
		if(stack2[top-1]<stack1[top])
			stack2[top]=stack2[top-1];
		else
			stack2[top]=stack1[top];
	}
	top++;
}

int pop()
{
	return stack1[--top];
}
int findMin()
{
	return stack2[top-1];
}

int main(int argc, char const *argv[])
{

	push(10);
	printf("%d\n",findMin());
	push(20);
	printf("%d\n",findMin());
	push(5);
	pop();
	printf("%d\n",findMin());
	push(4);
	printf("%d\n",findMin());
	push(2);
	printf("%d\n",findMin());
	push(1);
	printf("%d\n",findMin());
	return 0;
}

// Time complexity -----------push=orderof(1)---pop=orderof(1)
// space complexity-----------orderof(n)