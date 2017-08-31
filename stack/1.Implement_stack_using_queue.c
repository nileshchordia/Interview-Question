#include<stdio.h>

int queue1[10],front1=0,rear1=0;
int queue2[10],front2=0,rear2=0;

void enqueue(int data)
{
	if(!rear1)
	{
		queue1[rear1++]=data;
		while(front2!=rear2)
		{
			queue1[rear1++]=queue2[front2++];
		}
		front2=rear2=0;
	}
	else
	{
		queue2[rear2++]=data;
		while(front1!=rear1)
		{
			queue2[rear2++]=queue1[front1++];
		}
		front1=rear1=0;
	}
}


int dequeue()
{
	int data;
	if(rear1!=0)
	{
		data=queue1[front1++];
	}
	else
	{
		data=queue2[front2++];
	}
	return data;
}


void push(int data)
{
	enqueue(data);
}
int pop()
{
	return dequeue();
}
int main(int argc, char const *argv[])
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pop());

	return 0;
}

// Time complexity -----------push=orderof(n)---pop=orderof(1)
// space complexity-----------orderof(n)