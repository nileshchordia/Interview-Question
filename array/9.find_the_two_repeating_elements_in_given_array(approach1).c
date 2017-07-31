// assumptions:-
// n+2 elements
// 1<=a[i]<=n
// all elements from 1 to n occur atleast once except two elements
#include <stdio.h>
void twoRepeatElement(int *a,int n)
{
	printf("Repeating elements\n");
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
				printf("%d\t",a[i] );
			else
				continue;
		}

	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the length of array\n");
	scanf("%d",&n);
	printf("Enter the elements of an array \n");
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	// scanf("%")
	twoRepeatElement(a,n);
	return 0;
}


// time complexity is -------orderof(n**2)
// space complexity is ------orderof(1)