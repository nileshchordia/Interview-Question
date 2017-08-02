#include <stdio.h>

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void nextLargestNumber(int *a,int n)
{
	int i=n-2;
	int value;
	for (i; i >=0; --i)
	{
		if(a[i]<a[i+1])
			break;

	}
	value=a[i];
	printf("%d\n",i );
	for (int j = n-1; j >= 0; --j)
	{
		if(a[j]>value)
		{
			swap(&a[j],&a[value]);
			break;
		}
	}
	for(int j=value+1,k=n-1;j<k;j++,k--)
	{
		int temp=a[j];
		a[j]=a[k];
		a[k]=temp;
	}
}


int main(int argc, char const *argv[])
{
	printf("Enter digit in array form\n");
	int n;
	printf("Enter length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter elements in array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	nextLargestNumber(a,n);
	for (int i = 0; i < n; ++i)
	{
		printf("%d",a[i] );
	}
	printf("\n");

	return 0;
}

// Time Complexity ----------orderof(n)
// space Complexity----------orderof(1)