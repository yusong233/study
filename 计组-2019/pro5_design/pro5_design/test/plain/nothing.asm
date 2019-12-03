lui $t0, 0x0001	
nop
nop
nop
nop				
lui $t1, 2	
nop
nop
nop
nop							
lui $t2, 4	
nop
nop
nop
nop							
addu $s0, $t0, $t1		
nop
nop
nop
nop				
addu $s1, $zero, $t1	
nop
nop
nop
nop				
addu $s2, $zero, $t2	
nop
nop
nop
nop				
subu $s3, $t2, $t1	
nop
nop
nop
nop					
subu $s4, $t1, $t0	
nop
nop
nop
nop					
subu $s5, $t2, $t0	
nop
nop
nop
nop					
ori $s6, $zero, 4	
nop
nop
nop
nop					
ori $s7, $t0, 2	
nop
nop
nop
nop						
ori $s0, $t1, 8	
nop
nop
nop
nop			
#jump
addu $t0, $zero, $zero
nop
nop
nop
nop			
loop:
	inner:
	addu $t0, $t0, $t1
	nop
	nop
	nop
	nop										
	beq $t0, $t1, loop
	nop
	nop
	nop
	nop		
beq $t0, $t2, down
nop
nop
nop
nop	
ori $t8, $0, 8
nop
nop
nop
nop	
down:
jal end
nop
nop
nop
nop									
sw $t0, 0($s6)	
nop
nop
nop
nop						
sw $t1, 4($s6)	
nop
nop
nop
nop						
sw $t2, -4($s6)	
nop
nop
nop
nop												
lw $s0, -4($s6)	
nop
nop
nop
nop					
lw $s1, 0($s6)	
nop
nop
nop
nop					
lw $s2, 4($s6)	
nop
nop
nop
nop					
jal real	
nop
nop
nop
nop							
end:
jr $ra
nop
nop
nop
nop	
real:
nop
nop
nop
nop	