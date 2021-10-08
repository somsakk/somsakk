# int mult(int x, int y) {
#     return x * y;
# }

# int sumsquare(int x, int y) {
#     return mult(x,x) + y;
# }

# int main() {
#     int a= 3, b = 7, x;
#     x = sumsquare(a,b);
# }

# Suppose s0 = a, s1 = b, s2 = x, s3 = y
main:   li s0,3  # a = 3;
        li s1,7  # b = 7;

        # x = sumsquare(a,b)
        mv a0,s0  # put a and b into the arguments for sumsquare
        mv a1,s1
        jal sumsquare  # call sumsquare(a,b). a0 has the return value
        mv s2,a0  # x = sumsquare(a,b);        
done:   nop

sumsquare:
        addi sp,sp,-8 # create space for 2 words on stack
        sw ra, 4(sp) # save return addr
        sw a1, 0(sp) # save y 

        mv a1,a0 # a1 = x. Note a0 is already x.
        jal mult # call mult(x,x). a0 has the return value
        lw a1, 0(sp) # restore y from the stack
        add a0,a0,a1 # mult(x,x)+y

        lw ra, 4(sp) # get ret addr
        addi sp,sp,8 # restore stack pointer 
        jr ra        # return to the instruction with addr ra

mult:   mul a0,a0,a1  # mul is a new RISC-V assembly instruction 
        jr ra   # return to the instruction with addr ra
    

