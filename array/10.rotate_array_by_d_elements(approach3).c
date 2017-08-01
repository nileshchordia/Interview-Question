// left rotation
#include <stdio.h>

int gcd(int a,int b)
{
	if(a<b)
	{
		for(int i=a; i>0;i--)
		{
			if(a%i==0 && b%i==0)
				return i;
		}
	}
	else
	{
		for(int i=b; i>0;i--)
		{
			if(a%i==0 && b%i==0)
				return i;
		}		

	}
}

void rotateArray(int *a,int n,int d)
{
	int temp,i1,i2,i3;
	int count=gcd(d,n);
	for(i1=0;i1<count;i1++)
	{
		temp=a[i1];
		i2=i1;
		while(1)
		{
			i3=i2+d;
			if(i3 >= n)
				i3 = i3 - n;
			if(i1==i3)
				break;			
			a[i2]=a[i3];
			i2=i3;
		}
		a[i2]=temp;
	}


}
int main(int argc, char const *argv[])
{
	int n,d;
	printf("Enter the no. of elements to be rotate\n");
	scanf("%d",&d);
	printf("Enter length of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	rotateArray(a,n,d);
	printf("After rotation\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}

// Time Complexity----------orderof(n)
// space Complexity---------orderof(1)