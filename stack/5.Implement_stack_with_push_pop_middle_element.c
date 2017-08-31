#include<stdio.h>


// void push(int *stack)

int main()
{
    int n,k;
    printf("Enter the number of elements to be pushed in the stack:\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid Input\n");
        return 0;
    }
    int a[n],stack[n],top=-1;
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d:\n",i+1);
        scanf("%d",&k);
        stack[++top]=k;
    }
    if(n%2==1)
        printf("The middle element is: %d\n",stack[(int)(n/2)]);
    else
        printf("The middle element is: %d\n",stack[n/2-1]);
        
    printf("The popped element is: %d\n",stack[top--]);
    return 0;
        
}