/*/ Wap to accept two integers from the user and display their sum, Now ask the user if he wants to repeat the above process the ans is 'y'
then repeat it otherwise terminate the program with thankyou message*/


#include<stdio.h>
void main()
{
    int a,b;
    char choice ='y';

    while(choice=='y')
    {
     printf("enter two number");
    scanf("%d %d",&a,&b);
    printf("sum of these two num :%d",a+b);
    printf("\n Do you wnat to repeat(y/n)");
    fflush(stdin);
    scanf("%c",&choice);
    }
   
    printf("THankyou for seeing my code");
    return 0;
 }