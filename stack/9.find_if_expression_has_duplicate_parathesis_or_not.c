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


int isRedunant(char *s)
{
	int len=strlen(s);
	char stack[len];
	for (int i = 0; i < len; ++i)
	{
		if(s[i]==')')
		{
			if(stack[top]=='(')
				return 0;
			else
			{
				while(stack[top]!='(')
				{
					pop(stack);
				}
				top--;
			}
		}
		else
			push(stack,s[i]);
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	char s[]="(()(1+2))";
	isRedunant(s)==0?printf("there is redunacy\n"):printf("there is no redunacy\n");
	return 0;
}

// Time Complexity-------orderof(n)
// space Complexity------orderof(n)