#include "console.h"
#include "sbi.h"

void putchar(char c)
{
    sbi_call(c, 0, 0, 0, 0, 0, 0, 1);
}