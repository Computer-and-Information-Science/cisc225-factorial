#include <stdio.h>

int factorial (int n);

int main () {
	int n;
	printf("Enter n (0 to 12): ");
	scanf("%d", &n);
	printf("%d! = %d\n", n, factorial(n));
	return 0;
}

int factorial (int n) {
	if (n > 0)
		return n * factorial(n - 1);
	return 1;
}