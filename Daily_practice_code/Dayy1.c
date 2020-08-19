//Program to find sum of n Natural number
#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the last natural number you wnat the sum of:\n");
    scanf("%d",&n);
    for (int i =1; i<=n; i++)
    {
        sum +=n;
    } 
    printf("sum of first %d natural number is %d\n",n,sum);
    return 0;
}