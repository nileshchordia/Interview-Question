#include <stdio.h>

void rearrange(int *a,int n)
{
	for (int i = 0; i < n; ++i)
	{
		a[i]=a[i]+(a[a[i]]%n)*n;
	}
	for (int i = 0; i < n; ++i)
	{
		a[i]=a[i]/n;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
    rearrange(a,n);
    printf("After rearrange\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n",a[i] );
	}    

	return 0;
}


// Time Complexity----------orderof(n)
// space Complexity----------orderof(1)