/*Q1.Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message. */

#include<stdio.h>
int main(void)
{
    float f1,f2,result;
    printf("Enter two numbers: ");
    scanf("%f%f",&f1,&f2);
    //result=num1/num2;
    if(f2==0)
    
     printf("sorry sir/madam it gives an Infinity");
    
    else
    
        printf("result=%.2f",result=f1/f2);
    
    return 0;
}

