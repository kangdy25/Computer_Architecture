#include <stdio.h>

int main() {
	char c;

	c = 127;
	c = c + 1;
	printf("%d\n", c);

	c = -128;
	c = c - 1;
	printf("%d\n", c);

	return 0;
}