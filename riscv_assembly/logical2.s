# addi x5,x0,0xFF
li x5,0xFF
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
# NOT x12,x6  # pseudo-instruction for NOT

## Example: 
## Find the subnet and host parts of 
## IP addr 192.168.10.25/s where s is the subnet bits
li x12, 0xc0a80a19   # ip addr
# li x4,0xffffff00   # subnet mask /24
# li x4,0xfffffc00   # subnet mask /22
li x5, 28      # subnet bits s

# Get the subnet mask
addi x5,x5,-32  # find host bits h = 32 - s = -(s - 32)
sub x5,x0,x5    
li x4,-1        # all-one mask, -1 = 0xffffffff
sll x4,x4,x5    # shift all-one mask by h bits 

and x13,x12,x4      # the subnet part
xori x4,x4,-1       # host mask = NOT subnet mask
and x14,x12,x4      # the host part

nop