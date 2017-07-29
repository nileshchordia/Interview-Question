#include <iostream>
#include <stdio.h>


using namespace std;

int maximumCharacter(char *s,int len)
{
	int sum=0;
	int index;
	for(int i=0;i<len;i++)
	{
		int count=0;
		
		for(int j=i+1;j<len;j++)
		{
			if(s[i]==s[j])
				count++;
		}
		if(sum<count)
		{
			sum=count;
			index=i;
		}

	}
	printf("Maximum occurence = %c\n",s[index]);
}


int main(int argc, char const *argv[])
{
	int n;

	cout<<"enter the length of string\n";
	cin>>n;
	char S[n];
	cin>>S;
	maximumCharacter(S,n);
	return 0;
}

//Time comlexity ------------------orderof(n^2)------
//space complexity----------------orderof(1)