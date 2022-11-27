/*8. Write a program to print squares of the first N natural numbers*/
#include<stdio.h>
int main()
{
    int n,i,num;
    printf("inter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        num=i*i;
        printf("%d\n",num);
    }
    return 0;
}