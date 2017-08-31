#include <stdio.h>

int stack[10];
int top=-1;

void push(int data)
{
	stack[++top]=data;
}

int pop()
{
	return stack[top--];
}

void insert(int data)
{
	int x;
	if(top==-1)
	{
		push(data);
	}
	else
	{
			x=pop();
			insert(data);
			push(x);
	}
}
void reverse()
{
	if(top>=0)
	{
		int x=stack[top--];
		// printf("x=%d\n",x );
		reverse();
		insert(x);
	}
}
int main(int argc, char const *argv[])
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);	
	reverse(top);
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pop());
	return 0;
}

// Recursion stack-----------