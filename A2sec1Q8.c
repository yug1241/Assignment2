/*(A2Q8): Write a program that will calculate the price for a quantity entered from the keyboard, given
  that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
  percent discount for quantities over 50. */

#include <stdio.h>

int main() 
{ 
	int quantity; float unit_price = 5.0; float price;

	printf("Enter the quantity: ");
	scanf("%d", &quantity);

	if (quantity <= 0) 
	{
		printf("Invalid quantity entered. Please enter a positive quantity.\n");
		return 1;
	}

	if (quantity > 50) 
	{
		price = quantity * unit_price * 0.85; // 15% discount
	} 
	else if (quantity > 30)
	{
		price = quantity * unit_price * 0.90; // 10% discount
	} 
	else 
	{
		price = quantity * unit_price;
	}
	printf("The price for %d items is Rs %.2f\n", quantity, price);

	return 0;
}


