#ifndef _CONSOLE_H
#define _CONSOLE_H

#include "sbi.h"

#define va_list     __builtin_va_list
#define va_start    __builtin_va_start
#define va_end      __builtin_va_end
#define va_arg      __builtin_va_arg

struct sbiret putchar(char c);
void printf(const char *fmt, ...);

#endif