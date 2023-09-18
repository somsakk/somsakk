# Example of for loop in LN6
# load some data into memory as data of array A. Address of A[0] is 0x10000000
    li x5,0x10000000    # x5 = &A[0] = A
    addi x8,x0,8        # To set A[0]=8, we need to store 8 temporarily in x8
    sw x8,0(x5)         # then store x8 at address A. 
    addi x8,x0,1024     # store 1024 temporarily in x8
    sw x8,4(x5)         # A[1] = 1024
    addi x8,x0,-2       # store -2 temporarily in x8
    sw x8,8(x5)         # A[2] = -2

# initialize pointer to A[0], sum, i, array size
    addi x9,x5,0    # pointer to the current array element, x9 = &A[0]
    add x10,x0,x0   # Set initial sum = 0
    add x11,x0,x0   # Set initial i = 0
    addi x13,x0,3   # x13 = array size N

Loop:
    bge x11,x13,Done    # If i >= N, exit the loop (branch to Done), else go to next inst.
    lw x12,0(x9)    # load A[i] in temporary reg. x12
    add x10,x10,x12 # sum = sum + A[i]
    addi x9,x9,4    # increment the pointer to the next array element, x9 = &A[i+1] 
    addi x11,x11,1  # increment i, i++
    j Loop          # jump back to the instruction with label Loop.

Done: nop  
