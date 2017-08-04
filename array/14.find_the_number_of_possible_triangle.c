// sorted array------------
// if not given then sort it ---------orderof(nlog(n))+orderof(n**3)=orderof(n**3)

#include <stdio.h>


int possibleTriangle(int *a,int n)
{
	int x,y,z,count=0;
	for (int i = 0; i < n; ++i)
	{

		for(int j=i+1;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				x=a[i];
				y=a[j];
				z=a[k];
				// printf("%d %d %d\n",x,y,z );
				if(x+y>z)
				{
					if(y+z>x)
					{
						if(x+z>y)
						{
							printf("points of triangle %d %d %d\n",x,y,z);
							count++;
						}
					}
				}
			}
		}
	}
	return count;
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
	printf("Number of possible triangle %d",possibleTriangle(a,n));
	return 0;
}


// Time Complexity----------orderof(n**3)
// space Complexity---------orderof(1)