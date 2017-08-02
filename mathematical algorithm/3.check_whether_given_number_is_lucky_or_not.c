#include <stdio.h>

void isLucky(int n)
{
	int a[n];
	for (int i = 1; i <=n; ++i)
	{
		a[i]=1;
	}
	for(int j=2;j<=n-1;j++)
	{
		for (int i = 1; i <=n; ++i)
		{
			if(i%j==0)
				a[i]=0;

		}
	}
	if(a[n]==1 && n)
		printf("it  is lucky number\n");
	else
		printf("it is not lucky number\n");


}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	isLucky(n);
	return 0;
}