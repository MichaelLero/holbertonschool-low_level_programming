#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>     /* open, O_RDONLY */
#include <unistd.h>    /* read, write, close */
#include <sys/types.h> /* ssize_t */
#include <stddef.h>    /* size_t */
#include <stdio.h>     /* dprintf */
#include <stdlib.h>    /* exit */

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
