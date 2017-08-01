#include <stdio.h>
#include <stdlib.h>



void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void sortArrayWaveform(int *a,int n)
{
	for(int i=0;i<n;i+=2)
	{
		if(i>0 && a[i]<a[i-1])
			swap(&a[i],&a[i-1]);
		if(i<n-1 && a[i]<a[i+1])
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


// Time Complexity----------orderof(n)
// space Complexity---------orderof(1)