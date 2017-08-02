#include <stdio.h>

void checkPrime(int n)
{
	int count=0;
	int i=2;
	for (i; i*i<=n; ++i)
	{

		if(n%i==0)
		{
			count=1;
			break;
		}
	}
	if(count==1)
		printf("Number is not prime.\n");
	else
		printf("Number is prime\n");
}


int main(int argc, char const *argv[])
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	checkPrime(n);
	return 0;
}

// Time complexity---------orderof(squareroot(n))
// space compleity---------orderof(1)