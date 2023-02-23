#include <stdio.h>

int main() {
	float aThird = 1.0/3.0;
	double asum = 0.0;

	for (int i = 0; i < 30000; i++)
	{
		asum += aThird;
	}
	printf("%20.10f\n", asum);

	printf("=============================\n");

	float bThird = 1.0 / 3.0;
	double bsum = 0.0;

	for (int i = 0; i < 3000000; i++)
	{
		bsum += bThird;
	}
	printf("%20.10f\n", bsum);
	
	return 0;
}