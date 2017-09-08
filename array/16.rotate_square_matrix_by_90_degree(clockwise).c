// rotate square matrix in clockwise by 90----------
#include <stdio.h>

void swap(int *i,int *j)
{
	int temp=*i;
	*i=*j;
	*j=temp;
}

void reverse(int (*a)[3],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0,k=n-1;j<k;j++,k--)
			swap(&a[i][j],&a[i][k]);
	}
}
void rotateby90Clockwise(int (*a)[3],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
			swap(&a[i][j],&a[j][i]);
	}
	reverse(a,n);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	
}


int main(int argc, char const *argv[])
{
	int n;
	printf("Enter order of matrix\n");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter element row by row in matrix\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	rotateby90Clockwise(a,n);
	return 0;
}
// Time Complexity----------orderof(n**2)
// Space Complexity----------orderof(1)