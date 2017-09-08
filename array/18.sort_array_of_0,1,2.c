#include <stdio.h>

void swap(int *i,int *j)
{
	int temp=*i;
	*i=*j;
	*j=temp;
}

void sortArray(int *a,int n)
{
	int l=0,m=0,h=n-1;
	while(m<=h)
	{
		switch(a[m])
		{
			case 0:
				swap(&a[l++],&a[m++]);
				break;
			case 1:
				m++;
				break;
			case 2:
				swap(&a[m],&a[h--]);
				break;

		}
	}

}
int main(int argc, char const *argv[])
{
	int a[8]={2,0,1,0,1,2,1,0};
	sortArray(a,8);
	for(int i=0;i<8;i++)
		printf("%d\t\n",a[i]);
	return 0;
}
// Time Complexity----------orderof(n)
// Space Complexity----------orderof(1)