# cache_ex1.s
# This program is used to demonstrate the cache behavior of a RISC-V processor.
         li s0,4
         mv s1,gp  # gp = 0x10000000
LOOP:    beq  s0, zero, DONE
         lw   a0, 4(s1)
         lw   a1, 16(s1)
         lw   a2, 36(s1)
         addi s0, s0, -1
         j LOOP
DONE:    nop