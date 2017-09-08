#include <stdio.h>

void swap(int *i,int *j)
{
	int temp=*i;
	*i=*j;
	*j=temp;
}

void sortArray(int *a,int n)
{
	int count[3]={0};
	for(int i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	// printf("count %d\t%d\t%d\n",count[0],count[1],count[2]);
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(count[j]==0)
			j++;
		
		a[i]=j;
		count[j]--;
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