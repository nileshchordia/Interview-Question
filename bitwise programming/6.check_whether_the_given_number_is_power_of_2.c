// counting bit from lsb and start with 0
#include <stdio.h>

int countBit(int n)
{
	int count=0;
	while(n)
	{
		count+=n%2;
		n/=2;
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	(countBit(n)==1)?printf("It is power of 2\n"):printf("It is not power of 2\n");
	return 0;
}


// Time complexity ------orderof(logn)---
// space complexity------orderof(1)
// n is not number of inputs. It is value of number