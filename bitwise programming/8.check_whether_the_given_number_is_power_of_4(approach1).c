
// counting bit from lsb and start with 1
#include <stdio.h>

void check(int n)
{
	int count=0,setbit=0;
	printf("%d\n",n);
	while(n)
	{
		count++;
		if(n&1)
			setbit++;
		n>>=1;
	}
	if(setbit==1)
	{
		if(count%2!=0)
			printf("Number is power of 4\n");
		else
			printf("Number is not power of 4\n");

	}
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