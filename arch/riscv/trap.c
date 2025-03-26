#include "trap.h"
#include "register.h"
#include "panic.h"

void handle_trap(struct trap_frame* tf)
{
    // TODO: Implement trap branch and each detail
    uint32_t scause = READ_CSR(scause);
    uint32_t stval = READ_CSR(stval);
    uint32_t user_pc = READ_CSR(sepc);

    PANIC("Trap: scause=0x%08x, stval=0x%08x, user_pc=0x%08x", scause, stval, user_pc);
}