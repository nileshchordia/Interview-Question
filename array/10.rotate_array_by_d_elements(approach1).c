// left rotation
#include <stdio.h>


void rotateArray(int *a,int n,int d)
{
	int temp[d];
	for (int i = 0; i < d; ++i)
	{
		temp[i]=a[i];
	}
	for (int i = d; i < n; ++i)
	{
		a[i-d]=a[i];
	}
	for (int i = n-d; i <n ; ++i)
	{
		a[i]=temp[i-n+d];
	}
}
int main(int argc, char const *argv[])
{
	int n,d;
	printf("Enter the no. of elements to be rotate\n");
	scanf("%d",&d);
	printf("Enter length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	rotateArray(a,n,d);
	printf("After rotation\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}

// Time Complexity----------orderof(n)
// space Complexity---------orderof(d)