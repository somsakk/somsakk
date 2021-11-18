addi x2,x0,5 # BSel = 1, ALUSel = 0000
addi x3,x0,2
addi x7,x0,6
addi x9,x0,-9
add x1,x2,x3  # BSel = 0, ALUSel = 0000
add x6,x7,x9    
add x4,x1,x6
sub x1,x2,x3    # BSel = 0, ALUSel = 0001
sll x1,x2,x3    # BSel = 0, ALUSel = 001x
xor x1,x2,x9    # BSel = 0, ALUSel = 100x 
sra x4,x1,x3    # BSel = 0, ALUSel = 1011
nop