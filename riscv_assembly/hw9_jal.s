# hw9_jal.s
main: li s0, 2    # f = 2
      li s1, 3    # g = 3

      # call foo the first time. x = foo(f, g, 5)
      mv a0,s0    # pass f to the 1st argument
      mv a1,s1    # pass g to the 2nd argument
      li a2,5     # pass 5 to the 3rd argument
      jal foo     # call foo. 
      mv t0,a0    # save the returned value in x

      # call foo the 2nd time. y = foo(g, 5, f)
      mv a0,s1    # pass g to the 1st argument
      li a1,5     # pass 5 to the 2nd argument
      mv a2,s0    # pass f to the 3rd argument
      jal foo     # call foo
      mv t1,a0    # save the returned value in y

      sub a0,t0,t1  # z = x - y
      j End       

foo:	slli    a1,a1,1  	
        add     a1,a1,a0	
        slli    a0,a2,3		
        add     a0,a0,a2	
        add     a0,a1,a0	
        ret

End: 	beq x0,x0,End # suppose this is the End of the code.

#extra code for practicing conversion to machine code
sw t0,0x72C(s0)
sw t1,-2048(s0)
lb t1,5(s0)
blt t0,t1,0xD28
li t0,0x56789123
li t0,0x56789DEF
sra t2,t3,x8
srai t2,t3,8