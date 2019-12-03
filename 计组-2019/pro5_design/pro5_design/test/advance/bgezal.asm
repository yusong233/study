ori $5, $0, 0
bgezal $5, jump
addu $20, $31, $0
nop
ori $5, $0, 1
jump:
ori $1, $0, 1
jal real
ori $2, $0, 2
nop
real:
addu $6, $6, $5
nop
lui $6, 0xffff
ori $6, $6, 0xffff
bgezal $6, jump
subu $5, $5, $5
jr $31
nop