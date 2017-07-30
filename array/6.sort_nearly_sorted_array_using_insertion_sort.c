// nearly sorted array->each element is misplaced by at most k-position----


#include <stdio.h>


void nearlySorted(int *a,int n)   //insertion sort
{
	for(int j=1;j<n;j++)
	{
		int key=a[j];
		int i=j-1;
		while(i>-1 && a[i]>key)
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
	for (int j = 0; j < n; ++j)
	{
		printf("%d\t",a[j] );
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
	nearlySorted(a,n);
	return 0;
}


// time complexity is -------orderof(kn)
// space complexity is ------orderof(n)
