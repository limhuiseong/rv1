#ifndef _MM_H
#define _MM_H

#include "stdint.h"

#define PAGE_SIZE 4096

paddr_t palloc(uint32_t n);
paddr_t pcalloc(uint32_t n);

#endif