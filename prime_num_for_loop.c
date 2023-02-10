/*wap to accept an int from the user and check wheather it is prime num or not , Assume that user will input positive num greater then 1 only*/

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter your num ");
    scanf("%d",&n);

    for(i=2; i<n-1; i++)
    {
        if(n%i==0)
            break;
    }  
     if(i==n)
        printf("this is a prime num");
     else
        printf("it is not a prime num");
    
    
    return 0;
}