#include <stdio.h>


int largestSubArray(int *a,int n)
{
	int arr1[n];
	int arr2[n];
	int count1=0,count2=0;
	for (int i = 0; i < n; ++i)
	{
		
		if(a[i]==1)
		{
			count1++;
			arr1[i]=count1;
			arr2[i]=count2;
		}
		else
		{
			count2++;
			arr2[i]=count2;
			arr1[i]=count1;
		}
	}
	int ones,zeros,sum=-1,min,max;
	for (int i = 1; i < n; ++i)
	{
		for(int j=i;j<n;j++)
		{
			ones=arr1[j]-arr1[i-1];
			zeros=arr2[j]-arr2[i];
			if(ones==zeros)
			{
				if(sum<ones)
				{
					min=i;
					max=j;
					sum=ones;
				}
			}
		}
	}
	printf("sub array starting index %d and last index %d\n",min,max);
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	largestSubArray(a,n);
	return 0;
}


// time complexity is -------orderof(n**2)
// space complexity is ------orderof(n)