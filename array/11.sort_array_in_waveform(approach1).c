#include <stdio.h>
#include <stdlib.h>

int compareFun(const void * a,const  void *b)
{
	return (*(int *)a-*(int *)b);
}

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void sortArrayWaveform(int *a,int n)
{
	qsort(a,n,sizeof(int),compareFun);
	for (int i = 0; i < n; i+=2)
	{
		swap(&a[i],&a[i+1]);
	}
}
int main(int argc, char const *argv[])
{
	int n;
	printf("Enter length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	sortArrayWaveform(a,n);
	printf("After Waveform\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}


// Time Complexity----------orderof(nlog(n))
// space Complexity---------orderof(1)