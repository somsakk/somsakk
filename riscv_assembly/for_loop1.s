# for_loop1.s
li a0,0x120
li a1,0
li a2,5
mv t0,gp
StartLoop: bge a1,a2,EndLoop 
add t1,a0,a1
sw t1,0(t0)
lw t2,0(t0) # debug to check the value of t1 is stored in memory correctly
addi a1,a1,1
addi t0,t0,4
beq zero,zero,StartLoop
EndLoop: beq zero,zero,EndLoop
