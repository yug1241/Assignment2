//(A2.Q2):Write a program to create four function calculator. Four functions are +, - , *, /
#include<stdio.h>
int main()
{
	float num1,num2,ans;
	char op;
Here:
	printf("Enter 1st number :");
	scanf("%f",&num1);
	printf("Enter operand :");
	scanf("%*c%c",&op);
	printf("Enter 2nd  number :");
	scanf("%f",&num2);

	switch( op )
	{
		case '+' : ans = num1 + num2 ;
				   printf("ans : %.2f \n",ans);
				   break;
		case '-' : ans = num1 - num2 ;
				   printf("ans = %.2f \n",ans);
				   break;
		case '*' : ans = num1 * num2 ;
				   printf("ans : %.2f \n",ans);
				   break;

		case '/' :if( num2 != 0 )
				  {
					  ans = num1 /  num2 ;
					  printf("ans : %.2f \n",ans);
				  }
				  else
					  printf("Div by 0 gives an infinity \n");
				  break;
		default : printf("Invalid Operand \n");
				  break;
	}
	char ch;
	printf("Do you want to continue : y/n\n");
	scanf("%*c%c",&ch);

	if( ch == 'y' || ch == 'Y')
		goto Here;

	return 0;
}

