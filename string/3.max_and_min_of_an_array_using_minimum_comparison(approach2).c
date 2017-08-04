#include <stdio.h>


void minmax(int *a,int n)
{
	int min,max;
	// int max=a[0];
	if(a[0]<a[1])
	{
		min=a[0];
		max=a[1];
	}
	else
	{
		min=a[1];
		max=a[0];
	}


	for(int i=2;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
		else if(min>a[i])
			min=a[i];
	}
	printf("min=%d \t max=%d \n", min,max);
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