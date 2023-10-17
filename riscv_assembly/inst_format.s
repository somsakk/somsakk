li x3,0x3ED
li x2,-15
li x1,8

# R-Format
add x4,x3,x2
sub x5,x3,x2
sll x4,x2,x1
srl x5,x2,x1
sra x6,x2,x1
slt x4,x3,x2
sltu x5,x3,x2
xor x4,x3,x2
or x5,x3,x2
and x6,x3,x2

# I-Format
addi x4,x1,-50
addi x5,x3,-50
addi x6,x3,8
slli x4,x2,12
srli x5,x2,12
srai x6,x2,12
slti x4,x3,8
sltiu x5,x3,8
xori x4,x3,8
xori x5,x3,-1
ori x5,x3,8
andi x6,x3,8

## loads
lw x14, 8(x2)
lb x14, 8(x2)
lh x14, 8(x2)

# S-Format
sw x14, 8(x2)
sb x14, 8(x2)

# B-Format
Label1: nop
beq x1,x2, Label1

# U-Format
li x10, 0x87654321
li x11, 0x0000BEEF
li x10, 0xDEADBEEF

# B-Format
Loop:   beq x19,x10,End
        add x18,x18,x10
        addi x19,x19,-1
        j Loop
End:    nop
