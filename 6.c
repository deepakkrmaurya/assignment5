/*6. Write a program to print the first N even natural numbers*/
#include<stdio.h>
int main()
{
    int n,i,num;
    printf("inter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        num=i*2;
        printf("%d\n",num);
    }
    return 0;
}