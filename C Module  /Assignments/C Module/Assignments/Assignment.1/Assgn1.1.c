//Wap to check whether a number is even or odd

#include <stdio.h>
void main()
{
	int num;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num %2 == 0)
	printf("%d is an Even number",num);
	
	else
	printf("%d is an odd number",num);
	
}