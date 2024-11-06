# int factorial(int n) {
#     if (n <= 1)
#         return 1;
#     else
#         return (n * factorial(n − 1));
# }

main:       li a0, 4  # want to find 4!
            jal factorial
end:        j end # end of main. a0 = 4!
            
factorial:  addi sp, sp, -8 # make room for a0, ra
            sw ra, 4(sp)  # save ret addr
            sw a0, 0(sp)  # save n

            addi t0, zero, 1 # temporary reg (= 1) to compare n > 1
            blt t0, a0, else # if n>1 (equiv, 1<n), go to else
            li a0, 1 # otherwise, return 1
            addi sp, sp, 8 # restore sp
            ret # return

else:       addi a0, a0, -1 # n = n − 1
            jal factorial # recursive call for (n-1)!
            lw t1, 0(sp) # restore n into t1
            lw ra, 4(sp) # restore ra
            mul a0, t1, a0 # a0 = n*factorial(n−1)
            addi sp, sp, 8 # restore sp
            ret # return
