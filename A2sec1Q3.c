/*Q3.write a program to accept number and check whether the number is +ve, -ve and zero. */
#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter a Number");
    scanf("%d",&num);
    
    if (num>0)
    
    {
    printf("number is Positive\n");
    }
    else
    {
        printf("number is Negative\n");
    }
     return 0;
}
    
    
