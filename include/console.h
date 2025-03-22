#ifndef _CONSOLE_H
#define _CONSOLE_H

#include "sbi.h"

struct sbiret putchar(char c);
void printf(const char *fmt, ...);

#endif