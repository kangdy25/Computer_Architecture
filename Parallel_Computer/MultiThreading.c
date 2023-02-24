#include <stdio.h>
#include <omp.h>
#include <time.h>
#define SIZE 10000
float data[SIZE][SIZE];
 
int main() {
    int i, j;
    float sum;
    clock_t before;
    double result;
    
    // OpenMP를 사용했을 때
    sum = 0.0;
    before = clock();
    #pragma omp parallel for
	for (i = 0; i < SIZE; i++) 
    	for (j = 0; j < SIZE; j++)
        	data[i][j] = i * j * clock();
            
    #pragma omp parallel for
	for (i = 0; i < SIZE; i++) 
    	for (j = 0; j < SIZE; j++)
        	sum += data[i][j];
            
    result = (double)(clock() - before) / CLOCKS_PER_SEC;
    printf("with OpenMP : %7.5f\n", result);
            
	// OpenMP를 사용하지 않았을 때
    sum = 0.0;
    before = clock();
	for (i = 0; i < SIZE; i++) 
    	for (j = 0; j < SIZE; j++)
        	data[i][j] = i * j * clock();
            
	for (i = 0; i < SIZE; i++) 
    	for (j = 0; j < SIZE; j++)
        	sum += data[i][j];
            
    result = (double)(clock() - before) / CLOCKS_PER_SEC;
    printf("without OpenMP : %7.5f\n", result);
 
    getchar();
    
    return 0;
}

