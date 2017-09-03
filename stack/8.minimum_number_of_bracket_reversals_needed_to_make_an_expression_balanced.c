#include <stdio.h>
#include <string.h>


int top=-1;

void push(char *s,char c)
{
	s[++top]=c;
}

char pop(char *s)
{
	return s[top--];
}

void makeBalance(char *s)
{
	int len=strlen(s);
	char stack[len];
	for (int i = 0; i < len; ++i)
	{
		if(s[i]=='}')
		{
			if(top!=-1 && stack[top]=='{')
				pop(stack);
			else
				push(stack,s[i]);
		}
		else
		{
			push(stack,s[i]);
		}
	}
	// int count1=0, count2=0;
	// printf("%d\n",(int)strlen(stack) );
	// for (int i = 0; i < strlen(stack)-1; ++i)
	// {
	// 	if(stack[i]=='{')
	// 		count1++;
	// 	else
	// 		count2++;
	// 	// printf("%c\t%d\n",pop(stack),top);
	// }
	// printf("%d\t%d\n",count1,count2 );
	for (int i = 0; i < strlen(stack)-1; ++i)
	{
		if(stack[i]=='{')
			stack[i]='}';
		else
			stack[i]='{';
	}


	for (int i = 0; i < strlen(stack)-1; ++i)
	{
		printf("%c\n",stack[i]);
	}
}
int main(int argc, char const *argv[])
{
	char s[]="}}{{}}{{{}";
	makeBalance(s);
	return 0;
}

// Time Complexity-------orderof(k)--k=length of string
// space Complexity------orderof(k)
// max reversal---orderof(m+n)--m=no. of opening braces,n=no. of closing braces