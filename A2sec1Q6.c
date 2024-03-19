/*Q6.Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).*/



#include<stdio.h>
int main()
{
	#include <stdio.h>
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original=n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);
	return 0;
}
