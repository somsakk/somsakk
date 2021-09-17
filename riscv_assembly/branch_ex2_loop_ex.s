# Example in p.53
# load some data into memory as data of array A
# suppose address of A[0] is 4
    addi x5,x0,4    # addr of A[0]
    addi x8,x0,8
    sw x8,0(x5)  # put 8 into addr 4
    addi x8,x0,1
    sw x8,4(x5)
    addi x8,x0,-2
    sw x8,8(x5)

# initialize pointer to A[0], sum, i, array size
    addi x9,x5,0  # x9 = addr of A
    add x10,x0,x0 # sum = 0
    add x11,x0,x0 # i = 0
    addi x13,x0,3  # array size
Loop:
    bge x11,x13,Done
    lw x12,0(x9)    # x12 = A[i]
    add x10,x10,x12 # sum += A[i]
    addi x9,x9,4    # &A[i+1]
    addi x11,x11,1  # i++
    j Loop
Done: 
    nop
