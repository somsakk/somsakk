addi x5,x0,0xff
# addi x6,x0,0x345
li x6,0xDEADBEEF    # pseudo-instruction to load a large number (larger than 0x7ff)

# unpacking example
and x7,x5,x6    # take Byte 0 (LSB) of x6
slli x4,x5,8    # left shift 0xff by 8 to 0xff00 
and x8,x6,x4    # Byte 1
slli x4,x5,16   # left shift 0xff by 16 to 0xff0000
# and x4,x4,8   # alternative
and x9,x6,x4    # Byte 2
# andi x9,x6,0xff0000    # doesn't work (imm too large)
slli x4,x5,24   # left shift 0xff by 24 to 0xff000000
# and x4,x4,8   # alternative
and x10,x6,x4   # Byte 3 (MSB)

# or examples
ori x11,x6,0xff # LSB of x6 is FF
or x12,x6,x4  # MSB of x6 is FF since x4=0xff000000 

# packing example: pack the 4 bytes back
or x11,x10,x9
or x11,x11,x8
or x11,x11,x7

# NOT (= XOR with 0xFFFFFFFF)
# xori x12,x6,0xffffffff 
xori x12,x6,-1   # 0xFFFFFFFF is -1
# not x12,x6  # pseudo-instruction of xori x12,x6,-1

# compare logical vs arithematic shiftings
# give different results since the MSb of x6=0xDEADBEEF is 1 
srli x13,x6,8  # logical shift
srai x14,x6,8  # arithematic shift
# give different results since the MSb of x12=0x21524110 is 0
srli x15,x12,8  # logical shift
srai x16,x12,8  # arithematic shift

# Example: find negative of a 2's comp number
# using -a = ~a + 1
addi x4,x0,1  # set value of x4
not x5,x4     # x5 = ~x4
addi x5,x5,1  # x5 = -x4
# another way to get -x4 in one instruction
sub x3,x0,x4  # x3 = 0 - x4 = -x4

nop