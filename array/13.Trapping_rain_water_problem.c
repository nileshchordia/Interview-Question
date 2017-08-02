#include <stdio.h>


int min(int a,int b)
{

	// printf("%d\t%d\n",a,b );
	return a<b?a:b;
}


void trappRainWater(int *a,int n)
{
	int left_array[n];
	int right_array[n];
	
	for(int i=0;i<n;i++)
	{
		int l_max=0;

		if(l_max<a[i])
			l_max=a[i];

		left_array[i]=l_max;

	}


	for(int i=n-1;i>=0;i++)
	{
		int r_max=0;

		if(r_max<a[i])
			r_max=a[i];

		right_array[i]=r_max;

	}	

	for(int i=0;i<n;j++)
	{

		int minimum=min(left_array[i],right_array[i]);
		// printf("mini %d \n",minimum);
		printf("%d\t",minimum-a[i]);
	}
	printf("\n");

}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	trappRainWater(a,n);
	return 0;
}


// Time Complexity ----------orderof(n)
// space Complexity----------orderof(n)