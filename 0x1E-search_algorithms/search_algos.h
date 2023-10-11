#ifndef MY_HEADER
#define MY_HEADER
/** function prototypes **/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int left_index, int right_index);
int jump_search(int *array, size_t size, int value);
int binary_search_algo(int *array, int low, int high, int value);
int exponential_search(int *array, size_t size, int value);
#endif
