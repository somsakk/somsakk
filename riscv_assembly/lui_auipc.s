# lui example 1
# 
li t0,0x70000040  # pseudo instruction li
lui t1,0x70000     # lui the upper immediate (20 bits) 
addi t2,t1,0x40     # addi the lower immediate (12 bits) 

# lui example 2
li t0,0x70000C00
lui t1,0x70001
addi t2,t1,0xFFFFFC00  # addi the lower immediate (11 bits), sign-extended

# lui example 
li t0,0xDEADBEEF
lui t1,0xDEADC
addi t2,t1,0xFFFFFEEF

# auipc example 1
auipc s0,0x70000
addi s1,s0,0x40

# auipc example 2
auipc a0,0x70001
addi a1,a0,0xFFFFFC00
nop

li s7, 0xEEEEEFAB

addi s3, s4, 28
sll t1, t2, t3
srli s3, s1, 14
sw s9, 16(t4)
lw s4, 0x5C(t3)

addi x10,x0,24
addi x11,x0,3
add x28, x11, x0
blt x10,x28,16
jal x0, 0x1FFFF4
lb x11, -1024 (x7)
srai x5,x7,30

