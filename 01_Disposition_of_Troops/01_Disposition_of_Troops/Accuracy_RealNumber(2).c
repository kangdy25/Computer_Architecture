#include <stdio.h> 

int main() {
	float aThird = 1.0 / 3.0;
	float asum = 0.0;

	for (int i = 0; i < 30000; i++) {
		asum += aThird;
	}
	printf("%20.13f\n", asum);
	
	printf("============================\n");
	
	float bThird = 1.0 / 3.0;
	float bsum = 0.0;

	bsum = bThird * 30000;
	printf("%20.13f\n", bsum);

	return 0;
}