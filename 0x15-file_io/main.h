#ifndef FD_H
#define FD_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdarg.h>
/*-------------- Macros ----------*/
#ifndef MACROS_H
#define MACROS_H

#define STD_E STDERR_FILENO
#define STD_O STDOUT_FILENO
#define STD_I STDON_FILENO

#define EX_ERR_97 "Usage: cp file_from file_to"
#define EX_ERR_98 "Error: Can't read from file"
#define EX_ERR_99 "Error: Can't write to"
#define EX_ERR_100 "Error: Can't close fd FD_VALUE"

#endif
/*------------------------------------*/
int main(int argc, char **argv);
void get_error(int, ...);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
