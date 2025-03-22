#include "stdint.h"
#include "string.h"
#include "console.h"

extern char __bss[], __bss_end[], __stack_top[];

void kernel_main(void) {
    memset(__bss, 0, (size_t)__bss_end - (size_t)__bss);

    char* boot_message = "\nbooted\n";
    while (*boot_message)
        putchar(*boot_message++);

    while (1);
}

__attribute__((section(".text.boot")))
__attribute__((naked))
void boot(void)
{
    __asm__ __volatile__(
        "mv sp, %[stack_top]\n"
        "j kernel_main\n"
        :
        : [stack_top] "r" (__stack_top)
    );
}