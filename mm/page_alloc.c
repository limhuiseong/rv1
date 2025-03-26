#include "mm.h"

paddr_t palloc(uint32_t n)
{
    paddr_t paddr = next_paddr;
    next_paddr += n * PAGE_SIZE;

    if (next_paddr > (paddr_t)__free_ram_end)
        PANIC("out of memory");

    return paddr;
}

paddr_t pcalloc(uint32_t n)
{
    paddr_t paddr = next_paddr;
    next_paddr += n * PAGE_SIZE;

    if (next_paddr > (paddr_t)__free_ram_end)
        PANIC("out of memory");

    memset((void*)paddr, 0, n * PAGE_SIZE);

    return paddr;
}