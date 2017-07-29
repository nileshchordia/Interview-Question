#include <iostream>
#include <stdio.h>

using namespace std;


int getMajorityElement(int *a,int len)
{
	int voter=0;
	int votes=0;
	for(int i=0;i<len;i++)
	{
		if(a[voter]==a[i])
			votes++;
		else
			votes--;
		if(votes==0)
		{
			voter=i;
			votes=1;
		}

	}
	cout<<"output "<<a[voter]<<endl;
	return voter;
}

int isMajorityElement(int *a,int len,int majoirty_index)
{
	int count=0;
	for(int i=0;i<len;i++)
	{
		if(a[i]==a[majoirty_index])
		{
			count++;
		}
	}
	return(count>len/2)?a[majoirty_index]:0;
}


int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the length of array\n";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int majoirty_index=getMajorityElement(a,n);
	cout<<isMajorityElement(a,n,majoirty_index)<<endl;
	return 0;
}

//Time comlexity ------------------orderof(n)------
//space complexity----------------orderof(1)--------