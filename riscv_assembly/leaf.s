# Example of leaf functions

# int Leaf(int g, int h, int i, int j) {
#   int f;
#   f = (g+h) - (i+j);
#   return f;
#}

# int sum(int g, int h) {
#   return g + h;
# }

# int main (void) {
#   int x=10, y=11;
#   int g=4, h=2, i=3, j=1;
#   x = x - leaf(g,h,i,j);
#   y = leaf(y,h,i,j);
#   return sum(x,y);
# }

# Suppose s0 = x, y = s1, g = a0, h = a1, i = a2, j = a3
Main:   li s0,10
        li s1,11
        li a0,4
        li a1,2
        li a2,3
        li a3,1
        jal Leaf  # call Leaf
        sub s0,s0,a0

        mv a0,s1  
        jal Leaf  # call Leaf again
        mv s0,a0

        mv a0,s0
        mv a1,s1
        jal sum     # call sum
        nop

# Since s0,s1 will be used in Leaf function, need to save them
# and restore before Leaf returns
Leaf:   addi sp,sp,-8 # adjust stack for 2 items
        sw s1, 4(sp) # save s1 for use afterwards
        sw s0, 0(sp) # save s0 for use afterwards

        add s0,a0,a1 # f = g + h
        add s1,a2,a3 # s1 = i + j
        sub a0,s0,s1 # return value (g + h) – (i + j)

        lw s0, 0(sp) # restore register s0 for caller
        lw s1, 4(sp) # restore register s1 for caller
        addi sp,sp,8 # adjust stack to delete 2 items

        jr ra # jump back to calling routine

sum:    add a0,a0,a1
        jr ra