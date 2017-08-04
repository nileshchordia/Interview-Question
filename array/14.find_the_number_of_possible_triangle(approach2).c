// sorted array------------
// if not given then sort it ---------orderof(nlog(n))+orderof(n**3)=orderof(n**3)

#include <stdio.h>
#include <stdlib.h>

int compareFun(const void  *a ,const void * b)
{
	return (*(int *)a-*(int *)b);
}



int possibleTriangle(int *a,int n)
{

	qsort(a,n,sizeof(int),compareFun);
	int i=0;
	// int count=0;
	int sum=0;
	for (i; i < n-2; ++i)
	{
		int k=i+2;
		for(int j=i+1;j<n-1;j++)
		{
			while(k<n &&(a[i]+a[j])>a[k])
			{
					k=k+1;
			}
			sum=sum+k-j-1;
			// printf("%d\t%d\t%d\n",i,j,k );
			// printf("%d\t%d\t%d\n",a[i],a[j],a[k] );
			// printf("sum %d\t%d\n",sum,k);
		}
		
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter length of array\n");
	scanf("%d",&n);
	printf("Enter elements in array\n");
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	printf("Number of possible triangle %d\n",possibleTriangle(a,n));
	return 0;
}


// Time Complexity--   greater than  ---- orderof(n**2) but less than orderof(n**3)
// space Complexity---------orderof(1)