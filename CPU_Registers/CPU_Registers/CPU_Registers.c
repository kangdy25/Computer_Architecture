#include <stdio.h>
#include <time.h>

int main() {
	register int i, j;
	clock_t begin, end;
	double time_spent;

	begin = clock();
	for (i = 0; i < 10000; i++) {
		for (j = 0; j < 10000; j++) {

		}
	}
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("with register: time spent %f\n", time_spent);
	
	int a, b, temp2;
	begin = clock();
	for (a = 0; a < 10000; a++) {
		for (b = 0; b < 10000; b++) {

		}
	}
	end = clock;
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("without register: time spent %f\n", time_spent);
	getchar();
	return 0;
}