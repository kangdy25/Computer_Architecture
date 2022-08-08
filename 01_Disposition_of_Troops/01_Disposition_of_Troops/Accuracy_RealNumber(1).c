#include <stdio.h>

void float_test();
void double_test();

int main() {
	float_test();
	double_test();

	return 0;
}

void float_test() {
	float a = 0.2, b = 0.2, sum = 0.4;

	if (a + b == 0.4) printf("a + b == 0.4 is OK\n");
	if (0.2 + 0.2 == sum) printf("0.2 + 0.2 == sum is OK\n");
	if (0.2 + 0.2 == 0.4) printf("0.2 + 0.2 == 0.4 is OK\n"); // 角青等促.
	if ( (double) a + (double) b == 0.4) printf("(double)a + (double)b == 0.4 is OK\n");
	if (0.2 + b == sum) printf("0.2 + b == sum is OK\n");

}

void double_test() {
	double a = 0.2, b = 0.2, sum = 0.4;

	if (a + b == 0.4) printf("a + b == 0.4 is OK\n"); // 角青等促.
	if (0.2 + 0.2 == sum) printf("0.2 + 0.2 == sum is OK\n"); // 角青等促.
	if (0.2 + 0.2 == 0.4) printf("0.2 + 0.2 == 0.4 is OK\n"); // 角青等促.
	if ((double)a + (double)b == 0.4) printf("(double)a + (double)b == 0.4 is OK\n"); // 角青等促.
	if (0.2 + b == sum) printf("0.2 + b == sum is OK\n"); // 角青等促.
}