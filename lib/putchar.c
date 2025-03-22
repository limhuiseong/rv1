#include "console.h"
#include "sbi.h"

struct sbiret putchar(char c)
{
    return sbi_call(c, 0, 0, 0, 0, 0, 0, 1);
}