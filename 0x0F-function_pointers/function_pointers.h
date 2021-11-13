#ifndef _FUNCTION_POINTERS
#define _FUNCTION_POINTERS

#include <stddef.h>

int int_index(int *array, int size, int (*cmp)(int));

#endif
