#include <iostream>
#define MAX 10


using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	int sum;
	int hash[MAX]={0};  //hash table---------
	int temp;
	cout<<"Enter the length of array\n";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}

	cout<<"Enter the sum number\n";
	cin>>sum;
	for(int i=0;i<n;i++)
	{
		temp=sum-array[i];
		if(temp>=0 && hash[temp]==1)
		{
			cout<<"pair is "<<temp<<" "<<array[i]<< " " <<sum<<endl;
		}
		hash[array[i]]=1;
	}

	return 0;
}

//Time comlexity ------------------orderof(n)------
//space complexity----------------orderof(1)--------