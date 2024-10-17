# Example of jal and jalr, p. 71  
main: li s0,2  # a = 2
    li s1,5  # b = 5

    mv a0,s0  # to call sum(a,b), pass a and b to a0 and a1 
    mv a1,s1
    jal sum  # call sum()
    mv s2,a0  # copy returned value to c
    sub s0,s1,s2  # do a = b - c
    j end
sum: add a0,a0,a1  # find x + y = a0 + a1
    jr ra
    # ret
end: nop

