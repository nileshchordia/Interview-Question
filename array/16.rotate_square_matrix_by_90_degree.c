#include <stdio.h>

void rotateby90(int a[][4],int n)
{
	for (int i = 0; i < n; ++i)
	{
		int temp;
		for(int j=0,len=n-1;j<len;j++,len--)
		{
			temp=a[i][j];
			a[i][j]=a[i][len];
			a[i][len]=temp;
		}
	}


	int count=-1;

	for (int i = 0; i < n; ++i)
	{
		count++;
		int temp;
		for(int j=count;j<n;j++)
		{
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}


	for(int i=0;i<n;i++)
	{

		for(int j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
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
	rotateby90(a,n);
	return 0;
}