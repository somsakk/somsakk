addi x2,x0,0xED
addi x3,x0,0x89

# R-Format
add x4,x3,x2
sub x4,x3,x2
sll x4,x3,x2
slt x4,x3,x2
sltu x4,x3,x2
xor x4,x3,x2
srl x4,x3,x2
sra x4,x3,x2
or x4,x3,x2
and x4,x3,x2

# I-Format
addi x15,x1,-50
addi x4,x3,-50
addi x4,x3,8
slli x4,x3,8
slti x4,x3,8
sltiu x4,x3,8
xori x4,x3,8
srli x4,x3,8
srai x4,x3,8
ori x4,x3,8
andi x4,x3,8

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
li x10, 0xDEADBEEF

# B-Format
Loop:   beq x19,x10,End
        add x18,x18,x10
        addi x19,x19,-1
        j Loop
End:    nop
