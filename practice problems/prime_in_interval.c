// C program to find the prime numbers
// between a given interval
#include <stdio.h>

int main()
{
	int a, b, i, j, flag;
	printf("Enter lower lower of the interval: ");
	scanf("%d", &a);
	printf("\nEnter upper value of the interval: ");
	scanf("%d", &b);
	printf("\nPrime numbers between %d and %d are: ", a, b);
	for (i = a; i <= b; i++) {
		if (i == 1 || i == 0)
			continue;
		flag = 1;
		for (j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", i);
	}

	return 0;
}
