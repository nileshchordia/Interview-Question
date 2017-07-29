#include <iostream>

using namespace  std;



int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the length of array\n";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int sum;
	cout<<"Enter the sum number\n";
	cin>>sum;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(array[i]+array[j]==sum)
			{
				cout<<"pair is "<<array[i]<<" "<<array[j]<<" = "<<sum<<endl;
				break;
			}
			else
				continue;

		}
	}

	return 0;
}


//Time comlexity ------------------orderof(n^2)------
//space complexity----------------orderof(1)