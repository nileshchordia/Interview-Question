//given a sorted order array A of size n,find an element that occur more than n/2 times..........
#include <iostream>

using namespace std;


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



	for(int i=0;i<=n/2;i++)
	{
		if(a[i]==a[i+n/2])
		{
			cout<<" Majority element is "<<a[i]<<endl;
			break;
		}
	}

	return 0;
}



//Time comlexity ------------------orderof(n)------
//space complexity----------------orderof(1)--------