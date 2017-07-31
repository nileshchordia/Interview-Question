// assumptions:-
// n+2 elements
// 1<=a[i]<=n
// all elements from 1 to n occur atleast once except two elements
#include <stdio.h>
#include <stdlib.h>
void twoRepeatElement(int *a,int n)
{
	printf("Repeating elements\n");	
	int xor=a[0];
	for(int i=1;i<n;i++)
	{	
		xor^=a[i];
	}
	for(int i=1;i<n-1;i++)
	{	
		xor^=i;
	}

	
	int setbit=xor&(~(xor-1));
	// printf("%d\t%d\t%d\n",xor,setbit,~xor);
	int x=0,y=0;
	for(int i=0;i<n;i++)
	{
		if(a[i] & setbit)
			x^=a[i];
		else
			y^=a[i];
	}
	for(int i=1;i<n-1;i++)
	{
		if(i & setbit)
			x^=i;
		else
			y^=i;
	}
	printf("%d\t%d\n",x,y);

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
// space complexity is ------orderof(1)