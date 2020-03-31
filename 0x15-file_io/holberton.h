#ifndef _HOLBERTON_H
#define _HOLBERTON_H
/*Space for including libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/*Space for functions prototypes*/
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
#endif
