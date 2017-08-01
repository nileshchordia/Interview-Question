// left rotation
#include <stdio.h>


void reverseArray(int *a,int f,int l)
{
	int temp;
	for(;f<l;f++,l--)
	{
		temp=a[f];
		a[f]=a[l];
		a[l]=temp;
	}
}

void rotateArray(int *a,int n,int d)
{
	reverseArray(a,0,d-1);
	reverseArray(a,d,n-1);
	reverseArray(a,0,n-1);
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
// space Complexity---------orderof(1)