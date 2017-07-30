// Given an array of n-integer,construct product array ssuch that prod[i] is equal to
// product of all elements except arr[i] without using division operator-----

#include <stdio.h>
#include <stdlib.h>

int * productArrayWithoutDivision(int *a,int n)
{
	int temp=1;
	int *product=(int *)malloc(sizeof(int)*n);
	for (int i = 0; i < n; ++i)
	{
		product[i]=temp;
		temp*=a[i];
	}
	temp=1;
	for (int i = n-1; i >=0; --i)
	{
		product[i]*=temp;
		temp*=a[i];
	}
	return product;
}


int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the length of array\n");
	scanf("%d",&n);
	int a[n];
	int *p;
	printf("Enter the elements of array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	p=productArrayWithoutDivision(a,n);
	for (int i = 0; i < n; ++i)
	{
		printf("%d\t",p[i]);
	}
	printf("\n");
	return 0;
}


// time complexity is -------orderof(n)
// space complexity is ------orderof(n)