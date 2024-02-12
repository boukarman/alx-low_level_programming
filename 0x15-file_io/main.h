#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void check_100(int check, int f_d);
void check_99(ssize_t check, char *file, int f_from, int f_to);
void check_98(ssize_t check, char *file, int f_from, int f_to);
void check_97(int argc);

#endif
