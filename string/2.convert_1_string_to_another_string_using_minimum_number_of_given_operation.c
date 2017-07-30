#include <stdio.h>
#include <string.h>

void swap(char *a,char *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}


char * conversion(char *str1,char *str2)
{
	for(int i=strlen(str1)-1;i>=0;i--)
	{
		if(str1[i]==str2[i])
			continue;
		else
		{
			// int k;
			for(int j=0;j<i;j++)
			{
				// printf("%s\t%s\n",str1,str2 );
				swap(&str1[j],&str1[i]);
				// printf("%s\t%s\n",str1,str2 );
				if(str1[i]==str2[i])
					break;
				// printf("%c\n",str1[i]);
			}
		}
	}
	return str1;
}

int main(int argc, char const *argv[])
{
	char str1[10]="nilesh";    //first string
	char str2[10]="ilnshe";	// target string
	printf("converted string =%s and target string =%s\n",conversion(str1,str2),str2);


	return 0;
}


// time complexity ----orderof(n**2)
// space complexity ----orderof(1)
// if space complexity is applicable to change, then copy target_string to first_string,output is obtained--