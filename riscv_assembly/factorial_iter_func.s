        j main
fact_iter:
        ble     a0,zero,.L12
        addi    a4,a0,1
        li      a0,1
        mv      a5,a0
.L11:   mul     a0,a0,a5
        addi    a5,a5,1
        bne     a5,a4,.L11
        ret
.L12:   li      a0,1
        ret

main:   li      a0,5
        call    fact_iter
        mv      s1,a0