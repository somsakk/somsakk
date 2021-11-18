# addi x1,x0,1 #ImmSel=0,RegWEn=1,BSel=1,ALUSel=0000,MemRW=0,WBSel=1 
# slli x2,x1,4 #same but ALUSel=001x
# sw x1,0(x0) #ImmSel=1,RegWEn=0,BSel=1,ALUSel=0000,MemRW=1,WBSel=x
# sw x2,4(x0) #same
# lw x3,0(x0) #ImmSel=0,RegWEn=1,BSel=1,ALUSel=0000,MemRW=0,WBSel=0
# lw x4,4(x0) #same
# add x5,x3,x4 #ImmSel=x,RegWEn=1,BSel=0,ALUSel=0000,MemRW=0,WBSel=1

    addi x1,x0,0x0 #PCSel=0,ImmSel=0,RegWEn=1,BSel=1,ASel=0,ALUSel=0000,MemRW=0,WBSel=1 
    beq x1,x0,Label1 #PCSel=1,ImmSel=2,RegWEn=0,BrUn=0,BSel=1,ASel=1,ALUSel=0,MemRW=0,WBSel=x
    add x2,x0,x1 #PCSel=0,ImmSel=x,RegWEn=1,BrUn=0,BSel=0,ASel=0,ALUSel=0,MemRW=0,WBSel=1
Label1: addi x3,x0,0x7ff #same but ImmSel=0,BSel=1
    blt x1,x0,Label2 #PCSel=0,ImmSel=2,RegWEn=0,BrUn=0,BSel=1,ASel=1,ALUSel=0,MemRW=0,WBSel=x
    sub x2,x0,x3 #PCSel=0,ImmSel=x,RegWEn=1,BrUn=0,BSel=0,ASel=0,ALUSel=1,MemRW=0,WBSel=1
    andi x5,x3,0xff #same but BSel=1,ASel=0
Label2: slli x4,x2,8 #same but ASel=0010
nop