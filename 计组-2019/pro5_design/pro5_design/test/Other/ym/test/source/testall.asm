ori $sp,$sp,0x2ffc
lui $0,0xffff
lui $1,0xfff
sll $2,$1,2
srl $3,$2,1
addu $4,$3,$1
subu $5,$4,$3
slt $6,$5,$4
slt $7,$4,$5
beq $6,$0,new
nop
addu $8,$1,$2
beq $7,$0,new
nop
addu $9,$1,$2
new:
ori $10,$10,1
ori $11,$11,3
ori $13,$13,1
li $14,0x12345678
sw $14,0($0)
loop:
	slt $12,$10,$11
	beq $12,$0,endloop
	nop
	addu $10,$10,$13
	sb $10,3($0)
	lb $15,1($0)
	lb $16,1($0)
	j loop
	nop
endloop:	
lw $17,0($0)
jal func
nop
lui $20,0xffff
ori $20,$20,0xffff
sw  $20,4($0)
lb $21,7($0)
lb $22,7($0)

ori $1,$0,1
exit:
beq $1,$1,exit
nop

func:
addu $19,$18,$2
jr $ra
nop







