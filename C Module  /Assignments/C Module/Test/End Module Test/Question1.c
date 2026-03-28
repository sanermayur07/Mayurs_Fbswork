//1. Write a program to print sum of prime numbers in a given range

#include<stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
		return  0;
  }
    return 1;
}

void main() {
    int start; 
	int end;
	int sum = 0;

    printf("Enter starting number= ");
    scanf("%d", &start);

    printf("Enter ending number= ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
//            sum += i;
            sum= sum +i;
        }
    }

    printf("Sum of Prime Numbers = %d", sum);

    return 0;
}
