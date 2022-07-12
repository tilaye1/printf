#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* va_list */
#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */


int _printf(const char *format, ...);
char *print_s(va_list list);
char *print_c(va_list list);
char *print_d(va_list list);




