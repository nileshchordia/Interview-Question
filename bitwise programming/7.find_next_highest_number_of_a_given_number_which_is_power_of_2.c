// counting bit from lsb and start with 0
#include <stdio.h>

int nextHighest(int n)
{
	int count=0;
	while(n)
	{
		n&1;
		count++;
		n>>=1;
	}
	printf("%d\n",1<<count);
	
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	nextHighest(n);
	return 0;
}


// Time complexity ------orderof(logn)---
// space complexity------orderof(1)
// n is not number of inputs. It is value of number