#include <stdio.h>
void main()
{
	float price, discount = 0;
	char student;
	
	printf("Enter Total Price: ");
	scanf("%f", &price);
	
	printf("Are you Student? (y/n): ");
	scanf(" %c", &student);  //Space before %c
	
	if(student == 'y' || student == 'Y')
	{
		if(price > 500)
		   discount = price * 0.20;
		else
		   discount = price * 0.10;
	}
	
	else
	{
		if(price > 600)
		   discount = price * 0.15;
		else
		   discount = 0;
	}
	
	printf("Discount = %.2f\n", discount);
	printf("Final Amount = %.2f", price - discount);
	
}