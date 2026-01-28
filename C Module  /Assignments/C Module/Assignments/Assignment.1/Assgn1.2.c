//wap to check given 3 digit number is pallindrome or not

#include<stdio.h>
void main()
{
	int num, value, reverse;
	
	printf("Enter a 3 digit number: ");
	scanf("%d",&num);
	
	value = num;
	
	reverse = num % 10 * 100 + num /10 %10 * 10 + num /100;
	
	if(value == reverse)
	printf("%d is a Palindrome number ", value);
	
	else
	printf("%d is Not a Palindrome number ", value);
		
}