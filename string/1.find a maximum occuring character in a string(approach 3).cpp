#include <iostream>
#include <stdio.h>
#define MAX 256

using namespace std;

int maximumCharacter(char *s,int len)
{
	int hash[MAX]={0};
	int count =0;
	char max_charater;
	for(int i=0;i<len;i++)
	{
		hash[s[i]]++;
	}

	for(int i=0;i<MAX;i++)
	{
		if(count<hash[i])
		{
			count=hash[i];
			max_charater=i;
		}
	}
	cout<<max_charater<<endl;


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


//Time comlexity ------------------orderof(n)------
//space complexity----------------orderof(1)
