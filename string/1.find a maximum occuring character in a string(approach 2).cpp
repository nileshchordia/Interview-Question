#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;


int compareFun(const void *a,const void *b)
{
	return (*(char *)a- *(char *)b);
}


int maximumCharacter(char *s,int len)
{
	qsort(s,len,sizeof(char),compareFun);
	cout<<s<<endl;
	int max_count=0;
	char max_char=s[0];
	char charcter=max_char;
	int count=0;
	for(int i=0;i<len;i++)
	{
		
		if(charcter==s[i])
		{
			count++;
			continue;
		}

		if(max_count<count)
		{	
			max_count=count;
			max_char=charcter;
		}
			charcter=s[i];
			count=1;

		
		
	}

	cout<<"maximum occurence = "<<max_char<<endl;
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

//Time comlexity ------------------orderof(nlogn)------
//space complexity----------------orderof(1)