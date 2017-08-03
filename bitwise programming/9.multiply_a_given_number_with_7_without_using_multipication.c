#include <stdio.h>


int multiplyWithSeven(int n)
{
	return (n<<3)-n;
}
int main(int argc, char const *argv[])
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	printf("%d\n",multiplyWithSeven(n));
	return 0;
}