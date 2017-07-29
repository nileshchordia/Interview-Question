#include <iostream>
#include <stdio.h>

using namespace std;

int pairfunction(int *a,int len,int sum)
{
	int temp;
	int hash[len]={0};
	// for(int index =0;index<len;index++)
	// {
	// 	hash[a[index]]=1;
	// }
	for(int index=0;index<len;index++)
	{
		temp=sum-a[index];
		if(hash[temp]==1)
		{
			cout<<"output is "<<a[index]<<" "<<temp<<" "<<sum<<endl;
		}
		hash[a[index]]=1;
	}

}
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the length of aarray\n";
	cin>>n;
	int a[n];
	cout<<"enter the value of aarray\n";
	for(int index=0;index<n;index++)
	{
		cin>>a[index];
	}
	int sum;
	cout<<"enter the sum\n";
	cin>>sum;
	pairfunction(a,n,sum);
	return 0;
}