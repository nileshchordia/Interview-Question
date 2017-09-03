#include <stdio.h>
#include <stdlib.h>

void reverse(char *left,char *right)
{
	char temp;
	while(left<right)
	{
		// printf("nvn\n");
		temp=*left;
		*left++ = *right;
		*right-- = temp;

	}
}


void reverseWord(char *str)
{	
	// int len=strlen(str);
	char *wordBegin='\0';
	char *temp=str;
	while(*temp!='\0')
	{
		// printf("whui\n");
		if(((wordBegin=='\0' )||(*wordBegin==' '))&& (*temp!='\0'))
			wordBegin=temp;
		if( *(temp+1)==' ' || *(temp+1)=='\0')
		{
			// printf("ehilrif\n");
			reverse(wordBegin,temp);
			wordBegin='\0';
		}
		// printf("%c\n",*(temp+1));
		temp++;

	}
	// reverse(str,temp-1);

}



int main(int argc, char const *argv[])
{
	char str[50]="my name is ravi";
	reverseWord(str);
	printf("%s\n",str);
	return 0;
}