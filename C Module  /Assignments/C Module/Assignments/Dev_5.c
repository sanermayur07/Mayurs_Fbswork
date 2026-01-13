#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	float average, sum;
	
	printf("Enter five numbers: \n");
	scanf("%d %d %d %d %d",&a, &b,&c,&d);
	
	sum= a+b+c+d+e;
	average = sum/ 5;
	
	printf("Average of the five numbers= %.2f\n", average);
}