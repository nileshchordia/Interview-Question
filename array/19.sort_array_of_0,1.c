#include <stdio.h>

void swap(int *l,int *j)
{
	int temp=*l;
	*l=*j;
	*j=temp;
}

void sortArray(int *a,int n)
{
	int l=0,h=n-1;
	while(l<=h)
	{
		switch(a[l])
		{
			case 0:
				l++;
				break;
			case 1:
				swap(&a[l],&a[h--]);
			break;
		}
	}
}
int main(int argc, char const *argv[])
{
	int a[6]={0,1,0,1,1,0};
	sortArray(a,6);
	for(int i=0;i<6;i++)
		printf("%d\t\n",a[i]);
	return 0;
}
// Time Complexity----------orderof(n)
// Space Complexity----------orderof(1)