#include <stdio.h>


void minmax(int *a,int n)
{
	int min,max,cur_max,cur_min;

	if(n%2==0)
	{
		if(a[0]>a[1])
		{
			cur_max=a[0];
			cur_min=a[1];
		}
		else
		{
			cur_max=a[1];
			cur_min=a[0];
		}
		for (int i = 2; i < n; i+=2)
		{
			if(a[i]>a[i+1])
			{
				max=a[i];
				min=a[i+1];
				if(cur_max<max)
					cur_max=max;
				if (cur_min>min)
					cur_min=min;
			}
			else
			{
				max=a[i+1];
				min=a[i];
				if(cur_max<max)
					cur_max=max;
				if (cur_min>min)
					cur_min=min;				
			}
		}
	}
	else
	{
		cur_min=a[0];
		cur_max=a[0];
		for(int i=1;i<n;i+=2)
		{
			if(a[i]>a[i+1])
			{
				max=a[i];
				min=a[i+1];
				if(cur_min>min)
					cur_min=min;
				if(cur_max<max)
					cur_max=max;

			}
			else
			{
				max=a[i+1];
				min=a[i];
				if(cur_min>min)
					cur_min=min;
				if(cur_max<max)
					cur_max=max;
			}
		}
	}
	printf("min=%d \t max=%d \n", cur_min,cur_max);
}

int main(int argc, char const *argv[])
{
	int n;
	printf("enter length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter elements in array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	minmax(a,n);

	return 0;
}

// Time complexity---------orderof(n)
// space cimplexity--------orderof(1)