#include <stdio.h>
#define INFINITE -1



void closestElement(int *a,int *b,int len)
{
	int stack[len];
	int top=-1;
	for(int i=0;i<len;i++)
	{
		if(top==-1)
		{
			stack[++top]=i;
		}
		else
		{
			if(a[stack[top]]<a[i])
			{
				while((a[stack[top]]<a[i]) && top!=-1)
				{
					printf("while code %d\n",a[i] );
					b[stack[top--]]=a[i];
					top;
				}
				stack[++top]=i;
			}
			else
			{
				stack[++top]=i;
			}
			
		}
	}
	while(top!=-1)
	{
		b[stack[top--]]=INFINITE;
	}
}

int main(int argc, char const *argv[])
{
	int a[7]={10,20,1,5,25,500,60};
	int close[7];
	closestElement(a,close,7);
	for(int i=0;i<7;i++)
	{
		printf("%d\n",close[i]);
	}
	return 0;
}

// Time complexity ---push=orderof(n)---pop=orderof(n)
// space complexity-----------orderof(n)