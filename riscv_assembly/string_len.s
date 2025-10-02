# bare-metal (no syscalls) code for the string length C snippet on page 73 in LN7

.data
str:    .asciiz "CAT"          # string "CAT\0"
        .space 4             # pad to total 7 bytes
len:    .word 0               # int len = 0

.text
.globl _start
_start:
    # load address of str into t0
    la   t0, str

    # initialize len = 0
    li   t1, 0

loop:
    add  t2, t0, t1           # compute &str[len]
    lbu  s0, 0(t2)            # load str[len] (unsigned byte)
    beqz s0, done             # if str[len] == 0, exit loop

    addi t1, t1, 1            # len++
    j    loop

done:
    la   s1, len              # address of len
    sw   t1, 0(s1)            # store len back to memory

halt:
    j    halt                 # bare-metal: infinite loop (stop here)