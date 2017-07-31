// assumptions:-
// n+2 elements
// 1<=a[i]<=n
// all elements from 1 to n occur atleast once except two elements
#include <stdio.h>
void twoRepeatElement(int *a,int n)
{
	printf("Repeating elements\n");	
	int hash[n-2];


	for(int i=0;i<n;i++)
	{

		hash[i]=0;
	}
	for(int i=0;i<n;i++)
	{

		hash[a[i]]+=1;
	}
	for(int j=0;j<n;j++)
	{
		if(hash[j]>1)
		{
			printf("%d\t",j );
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


// time complexity is -------orderof(n)
// space complexity is ------orderof(n)