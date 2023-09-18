addi x5,x0,10       # x5 = x0 + 10 = 0 + 10 = 10
addi x6,x5,0x136    # x6 = x5 + 0x136
sub x7,x6,x5        # x7 = x6 - x5
add x6,x6,x5	# x6 = x6 + x5
add x0,x5,x5	# does nothing (cannot change value of x0)
nop	# pseudo-instruction, meaning no operation.