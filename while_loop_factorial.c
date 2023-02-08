/*WAP to accept an int from user and calculate and print its Factorial ,Make sure that your code should 1 if the user inpput 0*/

#include<stdio.h>
void main()
{
    int n,fact = 1;
    printf("Enter the number");
    scanf("%d",&n);

    while(n>1)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial is %d",fact);
    return 0;
}