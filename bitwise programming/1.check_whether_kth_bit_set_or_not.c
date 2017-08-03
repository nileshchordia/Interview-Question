// counting bit from lsb and start with 0
#include <stdio.h>

int check(int n,int d)
{

	return (n&(1<<d))?1:0;
}

int main(int argc, char const *argv[])
{
	int n,k;
	printf("Enter number\n");
	scanf("%d",&n);
	printf("Enter bit\n");
	scanf("%d",&k);
	printf("%d\n",check(n,k));
	return 0;
}


// Time complexity ------orderof(logn)---
// space complexity------orderof(1)
// n is not number of inputs. It is value of number