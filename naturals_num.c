#include<stdio.h>
void main ()
{
    int i;
    printf("enter an integer");
    scanf("%d",&i);

    while (i<=10)
    {
        printf("\n%d",i);
        i=i+1;
    }
    return 0;
}