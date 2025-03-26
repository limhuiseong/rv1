#ifndef _MM_H
#define _MM_H

#include "stdint.h"
#include "panic.h"
#include "string.h"

#define PAGE_SIZE 4096

extern char __free_ram[], __free_ram_end[];

static paddr_t next_paddr = (paddr_t)__free_ram;

paddr_t palloc(uint32_t n);
paddr_t pcalloc(uint32_t n);

#endif