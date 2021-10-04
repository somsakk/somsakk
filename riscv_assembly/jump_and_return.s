# Let's use symbolic register names and 
# pseudo-instructions 

# main
        li s0,3  # suppose a = s0 = 3
        li s1,5  # b = s1 = 5

        # sum(a,b)
        mv a0,s0  # set the sum's argument a0 = x = a
        mv a1,s1  # another argument, a1 = y = b
        # addi ra,zero,0x18  # this adddress is known afteward
        # j sum  # just to sum
        jal sum  # link and jump
        
        # sum(a,a)
        mv a0,s0
        mv a1,s0
        # addi ra,zero, 0x28
        # j sum 
        jal sum
        nop

# sum
sum:    add a0,a0,a1  # the sum function
        # jr ra  # return to the main
        ret  # another way to return