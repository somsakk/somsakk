addi x5,x0,16
# addi x5, x0, 0xdeadbeef # invalid
# li x5, 0xdeadbeef  # pseudo-instruction
addi x6,x0,-2
add x7,x5,x6
sub x5,x5,x6
sw x5,0(x0)
sw x6,4(x0)
sw x7,8(x0)
lb x8,1(x0)
lb x9,0(x0)  # observe signed extension
nop
