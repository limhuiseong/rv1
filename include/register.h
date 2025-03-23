#ifndef _REGISTER_H
#define _REGISTER_H

#include "stdint.h"

#define READ_CSR(reg)                                               \
    ({                                                              \                                 
        unsigned long __tmp;                                        \
        __asm__ __volatile__("csrr %0, " #reg : "=r"(__tmp));       \
        __tmp;                                                      \
    })

#define WRITE_CSR(reg, value)                                       \
    do {                                                            \                           
        uint32_t __tmp = (value);                                   \      
        __asm__ __volatile__("csrw " #reg ", %0" : : "r"(__tmp));   \
    } while (0)

#endif