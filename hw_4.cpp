#include<stdio.h>
#pragma warning(distable:4996)

int homework(int n);

int main(void) {
	int number;
	printf("Please enter a mumber:");
	scanf_s("%d", &number);
	homework(number);
	printf("\n");

	return 0;
}

int homework(int n) {
	if (n == 0 || n == 1)
	printf("%d", n);

	else {

		homework(n / 2);
		printf("%d", n % 2);

	}
	return 0;

}