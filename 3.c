/*3. Write a program to print the first N natural numbers in reverse order*/
#include<stdio.h>
int main()
{
    int n,i,num;
    printf("inter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        num=n-i;
        printf("%d\n",num);
    }
    return 0;
}