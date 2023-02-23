#include <stdio.h>
#include <time.h>
#define SIZE 10000
float data[SIZE][SIZE];

int main() {
	int i, j;
	float sum;
	clock_t before;
	double result;

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			data[i][j] = i * j * clock();
		}
	}
	sum = 0.0;
	before = clock();

	// 행 우선 사용
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			sum += data[i][j];
		}
	}
	result = (double)(clock() - before) / CLOCKS_PER_SEC;
	printf("Processing Time: %7.5f\n", result);

	sum = 0.0;
	before = clock();

	// 열 우선 사용
	for (j = 0; j < SIZE; j++) {
		for (i = 0; i < SIZE; i++) {
			sum += data[i][j];
		}
	}
	result = (double)(clock() - before) / CLOCKS_PER_SEC;
	printf("Processing Time: %7.5f\n", result);

	getchar();
	return 0;
}