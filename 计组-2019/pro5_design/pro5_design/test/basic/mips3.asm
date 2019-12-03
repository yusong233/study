ori $1, $0, 0x1234
ori $2, $1, 0x1
ori $3, $2, 0x0
addu $4, $4, $1
subu $5, $4, $4
addu $6, $5, $4
subu $7, $6, $1
lui $7, 0x1
lui $6, 0x2
ori $10, $0, 0x24
sw $6, 0($0)
sw $7, 0($10)
lw $7, 0($10)
lw $6, 0($0)
j jump
addu $10, $6, $6
subu $10, $10, $10
jump:
ori $15, $0, 0
beq $15, $0, out
addu $20, $15, $6
nop
lui $20, 0x20
nop
nop
out:
jal target
sw $31, 0($0)
nop
ori $15, 0x307c
jr $15
nop
target:
jr $31
addu $31, $31, $1
nop
nop
nop
subu $31, $31, $31




