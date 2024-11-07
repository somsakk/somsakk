main: li s0,3   # a
      li s1,5   # b
      mv a0,s0  # prepare to call sumsquare(a,b)
      mv a1,s1
      jal sumsquare
      mv s2,a0  # c = sumsquare(a,b)

      mv a0,s1  # prepare to call sumsquare(b,a)
      mv a1,s0
      jal sumsquare
      mv s3,a0  # d = sumsquare(b,a)

      add s4,s2,s3  # e = c + d
end:  j end  # end of main
          
sumsquare: addi sp,sp,-8  # space on stack
      sw ra,4(sp)  # save ret addr
      sw a1,0(sp)  # save y
      mv a1,a0     # mult(x,x,)
      jal mult      # call mult
      lw a1,0(sp)  # restore y
      add a0,a0,a1  # mult(x,x) + y
      lw ra,4(sp)   # restore ret addr
      addi sp,sp,8  # restore stack 
      jr ra

mult: mul a0,a0,a1  
      ret

