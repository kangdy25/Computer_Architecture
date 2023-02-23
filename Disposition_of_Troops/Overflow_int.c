#include <stdio.h>

int main() {
	unsigned char c;

	c = 255;
	c = c + 1;

	printf("%d\n", c);

	c = 0;
	c = c - 1;
	printf("%d\n", c);

	return 0;
}