#include <stdio.h>


int min(int a,int b)
{

	// printf("%d\t%d\n",a,b );
	return a<b?a:b;
}


void trappRainWater(int *a,int n)
{
	
	for(int i=0;i<n;i++)
	{
		int l_max=0,r_max=0;
		for(int j=0;j<=i;j++)
		{
			if(l_max<a[j])
			{
				l_max=a[j];
			}
		}


		for(int j=i;j<n;j++)
		{
			if(r_max<a[j])
			{
				r_max=a[j];
			}
		}
		int minimum=min(l_max,r_max);
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


// Time Complexity ----------orderof(n**2)
// space Complexity----------orderof(1)