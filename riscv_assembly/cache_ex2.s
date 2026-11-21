# cache_ex2.s
         li s0,4
         mv s1,gp  # gp = 0x10000000
LOOP:    beq  s0, zero, DONE
         lw   a0, 4(s1)
         lw   a1, 0x10(s1)
         lw   a2, 0x24(s1)
		 lw   a3, 0x44(s1)
         addi s0, s0, -1
         j LOOP
DONE:    nop