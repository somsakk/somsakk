# ifelse1.s

# int a = 20
# if (a == 3) {
#     a = a + 1
# } else {
#     a = a - 1
# }
# a = a - 5;

li a0, 20
li t0, 3
bne a0, t0, ELSE
addi a0, a0, 1
j ENDIF
ELSE:  addi a0, a0, -1
ENDIF: addi a0, a0, -5
