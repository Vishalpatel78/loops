#include<stdio.h>
void main()
{
    int i=1,n , sum=0;
    printf("Enter an integer");
    scanf("%d",&n);

    while(i<=n)
    {
         sum= sum+i;
        i=i+1;   
    }
     printf("sum is %d",sum);
    
  
    return 0;

}