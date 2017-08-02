#include <stdio.h>

void printPrime(int n)
{
	
	for (int j= 2; j <=n; ++j)
	{
		
		int count=0;
		int i=2;
		for (i; i*i<=j; ++i)
		{

			if(j%i==0)
			{
				count=1;
				break;
			}
		}
		if(count!=1)
			printf("Number is prime %d \n",j);
		// else
		// 	printf("Number is prime %d \n",i);
	}
}


int main(int argc, char const *argv[])
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	printPrime(n);
	return 0;
}

// Time complexity---------orderof(n*squareroot(n))
// space compleity---------orderof(1)