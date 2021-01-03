#include <stdio.h>

void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

	return;
}

int main(void) {
	// local variable definition
	int a = 100;
	int b = 200;

	printf("Before swap, value of a: %d\n", a);
	printf("Before swap, value of b: %d\n", b);

	// calling function to swap the values
	swap(&a, &b);

	printf("After swap, value of a: %d\n", a);
	printf("After swap, value of b: %d\n", b);

	return 0;
}