#ifndef FD_H
#define FD_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

#define STD_E STDERR_FILENO
#define STD_O STDOUT_FILENO
#define STD_I STDON_FILENO

int main(int argc, char **argv);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
