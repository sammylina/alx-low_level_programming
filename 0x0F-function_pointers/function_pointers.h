#ifndef _FUNCTION_POINTERS
#define _FUNCTION_POINTERS

#include <stddef.h>

void array_iterator(int *array, size_t size, void (*action)(int)); 

#endif
