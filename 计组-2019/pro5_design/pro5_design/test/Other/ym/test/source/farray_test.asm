.macro pop(%x)   
    lw %x 0($sp)
    addu $sp $sp $t9
.end_macro
.macro push(%x)
    subu $sp $sp $t9	
    sw %x 0($sp)
.end_macro

.text
     ori $sp,$sp,0x2ffc
     ori $t9,$0,4
     ori $t8,$0,1
     ori $s0,$0,3
     ori $s1,$0,0
     ori $s2,$0,400
     ori $a0,0
     jal fullarray
     nop
     beq $0,$0,exit
     nop
fullarray:
     beq $a0,$s0,ok
     nop
     ori $t0,$0,0
     for2b:
          beq $t0,$s0,return
          nop
          addu $t1,$t0,$t0
          addu $t1,$t1,$t1
          addu $t1,$t1,$s2
          lw $t3,0($t1)
          beq $t3,$0,notcontinue
          nop
          beq $0,$0,continue
          nop
          notcontinue:
          addu $t4,$a0,$a0
          addu $t4,$t4,$t4
          addu $t4,$t4,$s1
          addu $t5,$t0,$t8
          sw $t5,0($t4)
          sw $t8,0($t1)
          push($a0)
          push($t0)
          push($t1)
          push($t2)
          push($t3)
          push($t4)
          push($ra)
          addu $a0,$a0,$t8
          jal fullarray
          nop
          pop($ra)
          pop($t4)
          pop($t3)
          pop($t2)
          pop($t1)
          pop($t0)
          pop($a0)
          sw $0,0($t1)
          continue:
          addu $t0,$t0,$t8
          beq $0,$0,for2b
          nop
return:
     jr $ra
     nop
ok:
     addu $t7,$t7,$t8
     jr $ra
     nop
exit:     
     beq $0,$0,exit	
     nop