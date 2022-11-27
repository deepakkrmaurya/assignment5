/*7. Write a program to print the first N even natural numbers in reverse order*/
#include<stdio.h>
int main()
{
    int n,i,num;
    printf("inter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        num=n*2-2*i;
        printf("%d\n",num);
    }
    return 0;
}