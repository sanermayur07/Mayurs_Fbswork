//wap to check whether a person is eligible to vote (age = 18)

#include <stdio.h>
void main()
{
	int age;
	printf("Enter Person Age: ");
	scanf("%d", &age);
	
	if(age >= 18)
	{
		printf("%d is Eligible for Voting ",age);
	}
	
	else{
		printf("%d is Not Eligible for Voting ",age);
	}
}