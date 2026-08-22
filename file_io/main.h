#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>      /* open, O_RDONLY */
#include <unistd.h>     /* read, write, close */
#include <sys/types.h>  /* ssize_t */
#include <stddef.h>     /* size_t */

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

#endif
