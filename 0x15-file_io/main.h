#ifndef _MAIN_H_
#define _MAIN_H_

#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


ssize_t read_textfile(const char *filename, size_t letters);
//int create_file(const char *filename, const *text_content);

#endif
