# cache_ex3.s
         li s0,4
         mv s1,gp  # gp = 0x10000000
LOOP:    beq  s0, zero, DONE
         lw   a0, 0(s1)
         lw   a1, 4(s1)
         lw   a2, 8(s1)
		 lw   a3, 12(s1)
		 lw   a4, 16(s1)
		 lw   a5, 20(s1)
		 lw   a6, 24(s1)
		 lw   a7, 28(s1)
		 lw   t0, 32(s1)
         addi s0, s0, -1
         j LOOP
DONE:    nop