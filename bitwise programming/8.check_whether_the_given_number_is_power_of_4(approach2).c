
// counting bit from lsb and start with 1
#include <stdio.h>

void check(int n)
{
	printf("%d\n",n);
	while(n%4==0)
	{
		if((n&1) || (n&1<<1))
			break;
		n>>=2;
	}


	if(n==1)
		printf("Number is power of 4\n");
	else
		printf("Number is not power of 4\n");
}
int main(int argc, char const *argv[])
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	check(n);
	return 0;
}

// Time complexity ------orderof(logn)---
// space complexity------orderof(1)
// n is not number of inputs. It is value of number
// Awesome approach------------