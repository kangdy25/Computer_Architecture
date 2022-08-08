#include <stdio.h>

union sample {
	int i;
	float f;
};

int main() {
	union sample n;
	n.f = 0.2f;
	printf("%f in decimal = %X in hexadecimal\n", n.f, n.i);

	return 0;
}