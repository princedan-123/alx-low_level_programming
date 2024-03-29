#ifndef SEARCH_ALG
#define SEARCH_ALG
/*header files */
#include <stdio.h>

/*function prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int left, int right);
int jump_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_algo(int *array, int left, int right, int value);
#endif
