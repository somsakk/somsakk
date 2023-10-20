        li s0, 4  # pseudo-inst to load imm 4 to reg. s0
        li s1, 1
Shift:  slli s1, s1, 2 # label this inst as Shift
        beq s0, s1, target # conditional branching
        addi s1, s1, 1
        sub s1, s1, s0
target: add s1, s1, s0 # label this inst as target
        j Shift  # unconditional jump. Pseudo-inst to jump to inst labelled Shift
        nop
## branch_ex0.s ##