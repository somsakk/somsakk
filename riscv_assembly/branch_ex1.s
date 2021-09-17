# Branching example in page 50
        addi x11,x0,3    # g
        addi x12,x0,5   # h
        addi x13,x0,1   # i
        addi x14,x0,2   # j

        bne x13,x14,Else    # if i != j, go to Else
        add x10,x11,x12 # f = g + h
        j Exit          # go to end of if-else
Else:   sub x10,x11,x12 # f = g - h
Exit:   nop
