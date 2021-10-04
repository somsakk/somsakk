# Let's use symbolic register names and 
# pseudo-instructions 

# What if sum comes before main? 
# Since the instructions are executed from the first one, 
# we need to put the label for main and jump to that.
# Notice, in the generated assembly code, 
# the offsets in the jal instructions (jal x1,-24 and jal x1,-36)
# are both negative.

        j main  # go to main

# sum
sum:    add a0,a0,a1  # the sum function
        jr ra  # return to the main
        # ret  # another way to return

# main
main:   li s0,3  # suppose a = s0 = 3
        li s1,5  # b = s1 = 5

        # sum(a,b)
        mv a0,s0  # set the sum's argument a0 = x = a
        mv a1,s1  # another argument, a1 = y = b  
        jal sum  # link and jump
        
        # sum(a,a)
        mv a0,s0
        mv a1,s0
        jal sum
        nop

