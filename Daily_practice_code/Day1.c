//multiplication of table
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number whose product to be printed:\n");
    scanf("%d",&num);
    printf("the multiplication of table is %d\n",num);
    for ( int i=1; i<=10; i++)
    {
        printf("%d x %d=%d\n",num,(i+1),(i+1)*num);

    }
    return 0;
}