 
    #include<stdio.h>
    int main()
    {
        int num1,num2,num3,max;
        printf("Enter number 1 :");
        scanf("%d",&num1);
        printf("Enter number 2:");
        scanf("%d",&num2);
        printf("Enter number 3:");
        scanf("%d",&num3);
        if(num1>num2 && num1>num3)
        {
           printf("num1 is max\n");
        }
       else if (num2>num3)
        {
             printf("num2 is max\n");
        }
        else
        printf("num3 is max\n");
        
        
        //by conditional operator
        max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
        printf("maximum among given three number is = %d\n",max);
        
    return 0;
}
    
