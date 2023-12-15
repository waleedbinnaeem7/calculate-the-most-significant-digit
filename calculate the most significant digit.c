#include <stdio.h>

int msd(int n) {

	int s_digit = n / 100;

	return s_digit;
}

int main() {
	
	int n;
	printf("Input 3 digit number: ");
	scanf("%d", &n);
	
	if (n < 100 || n > 999) {
		printf("Invalid input.\n");
		return 1; 
	}

	int r = msd(n);

	if (r != -1) {
		printf("significant digit of %d is: %d\n", n, r);
	}

	return 0;
}
