#include<stdio.h>
void main()
{
	float radius, area;
	int x= 3.14;
	
	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);
	
	area = x* radius* radius;
	
	printf("Area of the circle = %2f\n",area);
	
}