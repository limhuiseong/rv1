#include "stdint.h"

extern char __bss[], __bss_end[], __stack_top[];

__attribute__((section(".text.boot")))
__attribute__((naked))
void boot(void)
{
    
}