#include <stdio.h>

void printPrime(int n)
{
	int a[n];
	for (int i = 2; i <=n; ++i)
	{
		a[i]=1;
	}

	for(int i=2;i<=n;i++)
	{
		
		for (int j = i+i;j<=n;j+=i)
		{
			a[j]=0;
		}
	}

	printf("Prime Number is ");
	for (int i = 2; i <=n; ++i)
	{
		if(a[i]==1)
			printf("%d\t",i);
	}
	printf("\n");

}


int main(int argc, char const *argv[])
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	printPrime(n);
	return 0;
}

// Time complexity----<   orderof(n*squareroot(n))
// space compleity---------orderof(1)