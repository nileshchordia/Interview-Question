// counting bit from lsb and start with 0
#include <stdio.h>

int toggleBit(int n,int d)
{
	n=n^(1<<d);
	printf("%d\n",n);
}

int main(int argc, char const *argv[])
{
	int n,k;
	printf("Enter number\n");
	scanf("%d",&n);
	printf("Enter bit\n");
	scanf("%d",&k);
	toggleBit(n,k);
	return 0;
}


// Time complexity ------orderof(logn)---
// space complexity------orderof(1)
// n is not number of inputs. It is value of number