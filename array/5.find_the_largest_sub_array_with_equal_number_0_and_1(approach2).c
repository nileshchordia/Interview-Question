#include <stdio.h>


int largestSubArray(int *a,int n)
{
	int min,max,sum=0;
	int l,u,diff,curr_dif=0;
	int hash[n];
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			a[i]=-1;
		}
	}

	int temp[n];
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		temp[i]=sum;
	}


	for(int i=0;i<n;i++)
	{
		hash[i]=-1;
	}



	for(int i=0;i<n;i++)
	{
		if(hash[temp[i]]!=-1)
		{
			l=hash[temp[i]];
			u=i;
			diff=u-l;

		}
		else
		{
			hash[temp[i]]=i;
			continue;
		}
		if (curr_dif<diff)
		{
			curr_dif=diff;
			max=u;
			min=l;

		}
	}
	printf("largestSubArray %d\n",max-min);
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
	largestSubArray(a,n);
	return 0;
}


// time complexity is -------orderof(n)
// space complexity is ------orderof(n)