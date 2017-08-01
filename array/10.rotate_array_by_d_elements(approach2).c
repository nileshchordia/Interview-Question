// left rotation
#include <stdio.h>


void rotateArray(int *a,int n,int d)
{
	for(int j=0;j<d;j++)
	{

		int temp=a[0];
		int i=1;
		for (i; i < n; ++i)
		{
			a[i-1]=a[i];
		}
		// printf("%d\t%d\n",i,temp);
		a[--i]=temp;
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

// Time Complexity----------orderof(n*d)
// space Complexity---------orderof(1)