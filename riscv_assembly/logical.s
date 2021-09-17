addi x5,x0,0xff
# addi x6,x0,0x345
li x6,0xDEADBEEF    # pseudo-instruction to load

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

# packing example: pack the 4 bytes back
or x11,x10,x9
or x11,x11,x8
or x11,x11,x7

# NOT (= XOR with -1) 
xori x12,x6,-1   # oxFFFFFFFF is -1

nop