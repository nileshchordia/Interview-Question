#include <stdio.h>
#include <stdlib.h>


int compareFun(const void *a ,const void *b)
{
	return (*(int*)a)-(*(int*)b);
}

int largestMultiple(int *a,int n)
{
	int sum=0;
	qsort(a,n,sizeof(int),compareFun);
	for (int i = 0; i < n; ++i)
		sum+=a[i];
	printf("sum = %d\n",sum);
	if(sum%3==2)
	{
		int count=0;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]%3==2)
			{
				a[i]=-1;
				break;
			}
			else if(a[i]%3==1)
			{	
				a[i]=-1;
				count++;
				if(count==2)
					break;
			}

		}
	}
	else if(sum%3==1)
	{
		int count=0;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]%3==1)
			{
				a[i]=-1;
				break;
			}
			else if(a[i]%3==2)
			{	
				a[i]=-1;
				count++;
				if(count==2)
					break;
			}

		}

	}
	int final=0;
	for (int i = n-1; i >=0; --i)
	{
		if(a[i]==-1)
			continue;
		final=final*10+a[i];

	}
	printf("final %d\n",final);

}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter length of digit\n");
	scanf("%d",&n);
	printf("Enter digit by digit\n");
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	largestMultiple(a,n);
	return 0;
}


// Time complexity --------orderof(n)
// Space complexity--------orderof(1)