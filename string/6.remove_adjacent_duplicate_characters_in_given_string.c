#include <stdio.h>
#include <string.h>




void removeAdjacent(char *s)
{
	int len=strlen(s);
	int k=0,i = 0;
	for (; i < len-1; ++i)
	{
		if(s[i]!=s[i+1])
		{
			s[k++]=s[i];
		}
		else
			i++;
	}
	s[k++]=s[i];
	s[k]='\0';
	if(len!=strlen(s))
		removeAdjacent(s);
}

int main(int argc, char const *argv[])
{
	char s[]="raviiva";
	removeAdjacent(s);
	printf("%s\n",s);
	return 0;
}

// Time Complexity------orderof(n**2)
// Space Compexity--------orderof(1)