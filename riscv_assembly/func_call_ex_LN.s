# Example of jal and jalr, p. 71  
    li s0,2  # a
    li s1,5  # b

    mv a0,s0
    mv a1,s1
    jal sum
    mv s2,a0
    sub s0,s1,s2
    j end
sum:   # x = a0, y = a1
    addi a1,a1,2
    add a0,a0,a1
    jr ra
    # ret
end:
    nop

