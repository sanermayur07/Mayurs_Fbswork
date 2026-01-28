//wap to Accept three sides of a is equilateral, isosceles, or scalene

#include<stdio.h>
void main()
{
	int a, b, c ;
	
	printf("Enter Three sides of Triangle : ");
	scanf("%d %d %d",&a, &b, &c);
	
	if(a==b && b==c && a==c)
	printf("Traingle is Equilateral ");
	
	else if(a==b || b==c || a==c)
	printf("Triangle is Isosceles ");
	
	else 
	printf("Triangle is Scalene ");
}