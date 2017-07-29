#include <stdio.h>

int subArray(int *a,int n,int sum)
{
	int l,r;
		l=a[0];
		r=a[0];
		int count=0;
		int result=l;
		// printf("%d\n",sum);
		for(int i=1;i<n;i++)
		{
			if(result==sum)
			{
				for(int j=count;j<i;j++)
				{
					printf("%d\t",a[j] );
				}
				printf("\n");
				break;
			}
			else if(result<sum)
			{
				printf("%d\n",a[i] );
				r=a[i];
				result+=r;
			}
			else if(result>sum)
			{

				result-=l;
				// count=1;
				l=a[++count];
				i--;
				// printf("count %d\n",count );
			}
			printf("sum %d\n",result );
		}
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
// space complexity----------orderof(1)
// if therre is negative element then this approach might not worked----