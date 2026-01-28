//wap to check whether a given character is uppercase or lowercase

#include <stdio.h>
void main()
{
	char ch;
	printf("Enter the Character: ");
	scanf("%c",&ch);
	
	if(ch >= 'A' && ch <= 'Z'){
		printf("The Character is Uppercase");
		
	}
	else{
		printf("The Character is Lowercase");
	}
}