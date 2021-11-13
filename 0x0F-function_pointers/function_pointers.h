#ifndef _FUNCTION_POINTERS
#define _FUNCTION_POINTERS

#include <stddef.h>

void print_name(char *name, void (*f)(char *name));

#endif
