addi x5,x0,2047 # x5 = 0x000007FF
addi x6,x0,-2 # x6 = 0xFFFFFFFE
add x7,x5,x6 # x7 = 0x0A0B + (-2) = 0x000007FD

li x10, 0x10000000 # set x10 as the base address where memory is accessed

sw x5,0(x10) # mem(0x10000000) = 0x000007FF
sw x6,4(x10) # mem(0x10000004) = 0xFFFFFFFE
sw x7,8(x10) # mem(0x10000008) = 0x000007FD

lw x7,4(x10) # x7 = 0xFFFFFFFE
lb x8,1(x10) # x8 = 0x00000007
lb x9,0(x10) # x9 = ?, observe signed extension
lbu x11,0(x10) # load byte unsigned, x11=?

lw t1,1(x10) # Load word can start from any byte address. x6 = ?

sb x11,3(x10) # store the LSB of x11 into address 3 + x10
lw x9,0(x10) # x9 = 0xFF0007FF
nop

## add_load_store.s
# Note: Venus Simulator in web allows writing only to the part of memory belonged to data.
# Hence, the base address is selected as 0x10000000. To load this we use the pseudo-instruction li.
# which is translated to lui and addi instructions.
# However, Venus simulator in VSCode doesn't have this restriction.