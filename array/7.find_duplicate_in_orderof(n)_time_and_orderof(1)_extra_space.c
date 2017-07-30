#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void findDuplicate(int *a,int n)
{
	printf("duplicate element\n");
	for (int i = 0; i <n; ++i)
	{
		if(a[abs(a[i])]<0)
			printf("%d\t",abs(a[i]) );
		else
		{
			a[abs(a[i])]=-1*a[abs(a[i])];
		}
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	findDuplicate(a,n);
	return 0;
}


// time complexity is -------orderof(n)
// space complexity is ------orderof(1)