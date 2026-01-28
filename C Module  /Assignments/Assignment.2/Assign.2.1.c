//wap to Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations

#include<stdio.h>
void main()
{
	int a,b ;
	char op ;
	
	printf("Enter two number: ");
	scanf("%d %d", &a,&b);
	
	printf("Enter a operator: ");
	scanf(" %c",&op);    //space before %c
	
	if(op == '+' ){
		printf("Result is %d",a+b);
	}
	
	else if(op == '-'){
		printf("Result is %d",a-b);
	}
	
	else if(op == '*'){
		printf("Result is %d",a*b);
	}
	
	else if(op == '/')
	{ 
		if(b !=0)
		printf("Result is %d",a/b);
		else
		printf("Division by zero not allowed");
	}
	
	else if(op == '%')
	{
		if(b!=0)
		printf("Result is %d", a % b);
		else
		printf("Modulo by zero not allowed");
	}
	else
	{
		printf("Invalid Operator");
	}
}