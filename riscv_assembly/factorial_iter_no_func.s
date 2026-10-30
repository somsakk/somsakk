# factorial_iter_no_func.s
# assume no support for function calls, 
# so we implement factorial iteratively without using a function call  

main:   li      a0,5            
.L1:    ble     a0,zero,.L3
        addi    a2,a0,1
        li      a0,1
        mv      a1,a0
.L2:    mul     a0,a0,a1  # change to add if no multiply instruction
        addi    a1,a1,1
        bne     a1,a2,.L2
        beq     x0,x0,end       # return
.L3:    li      a0,1            # 0! = 1
        beq     x0,x0,end       # return
end:    beq     x0,x0,end