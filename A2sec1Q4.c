/*Write a program to find maximum of two numbers using
a. If – else
b. conditional operator. */


    
    
    //by If-else
    
    #include<stdio.h>
    int main()
    {
        int num1,num2,max;
        printf("Enter number 1 :");
        scanf("%d",&num1);
        printf("Enter number 2:");
        scanf("%d",&num2);
        if(num1>num2)
        //printf("max=%d\n",num1);
        printf("num1 is max\n");
        else
        printf("num2 is max\n");
        
        
        //by conditional operator
        max=(num1 > num2) ? num1 : num2;
        printf("maximum of given two number is = %d\n",max);
        
    return 0;
}
    
    
    
    
