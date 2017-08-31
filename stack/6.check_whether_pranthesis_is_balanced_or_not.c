#include <stdio.h>
#include <string.h>

int top=-1;

void push(char *s,char data)
{
	s[++top]=data;
	// printf("%c\t%c\n",data,s[top]);
}

char pop(char *s)
{
	// printf("pop %c\n",s[top]);
	return s[top--];
}


int isBalanced(char *s)
{
	int len=strlen(s);
	// printf("len %d\n",len );
	char stack[len];
	int result=1;
	for (int i = 0; i < strlen(s); ++i)
	{
		if(s[i]=='}')
		{

			if(pop(stack)!='{')
				return 0;
		}
		else if(s[i]==')')
		{
			if(pop(stack)!='(')
				return 0;
		}
		else if(s[i]==']')
		{
			if(pop(stack)!='[')
				return 0;
		}
		else
			push(stack,s[i]);
		// printf("result %d\t%d\n",result,i);
	}
	return result;
	
}


int main(int argc, char const *argv[])
{
	char s[25]="[()]{}{[()()]}";
	isBalanced(s)==0?printf("Not Balanced\n"):printf("Balanced\n");
	return 0;
}
// Time Complexity--------orderof(n)
// space Complexity-------orderof(n)