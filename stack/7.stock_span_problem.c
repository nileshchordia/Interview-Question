#include <stdio.h>

int top=-1;

void push(int *s,int t)
{
	s[++top]=t;
}

int pop(int *s)
{
	return s[top--];
}

void isEvaluating(int *a,int n,int *span)
{
	int stack[n];
	push(stack,0);
	span[0]=0;
	for(int i=1;i<n;i++)
	{
		while(top!=-1 && a[i]>a[stack[top]])
			pop(stack);
		if(top==-1)
			span[i]=i;
		else
			span[i]=i-stack[top]-1;
		push(stack,i);
	}
}
int main(int argc, char const *argv[])
{
	int n;
	printf("Enter number of days\n");
	scanf("%d",&n);
	int a[n];
	int span[n];
	printf("Enter the price of stock\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	isEvaluating(a,n,span);
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n",span[i]);
	}
	return 0;
}

// Time Complexity--------orderof(n)
// space Complexity-------orderof(n)