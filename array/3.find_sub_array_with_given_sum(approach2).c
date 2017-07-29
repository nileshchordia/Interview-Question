#include <stdio.h>


int subArray(int *a,int n,int sum)
{
	int hash[n];
	int result=0;
	int j=0,i=0,count=0;
	for(i;i<n;i++)
	{
		result+=a[i];
		hash[i]=result;
		int temp=result-sum;
		for(j=0;j<i;j++)
		{
			if(temp==hash[j])
			{
				count++;
				break;
			}

		}
		if(count!=0)
			break;


	}
	printf("the sub array is \n");

	for(count;count<=i;count++)
	{
		printf("%d\t",a[count]);
	}
	printf("\n");
}


int main(int argc, char const *argv[])
{
	int n,sum;
	printf("enter the length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the value in array\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the sum of sub array\n");
	scanf("%d",&sum);
	subArray(a,n,sum);
	return 0;
}


//Time Complexity ----------orderof(n)
// space complexity----------orderof(n)
