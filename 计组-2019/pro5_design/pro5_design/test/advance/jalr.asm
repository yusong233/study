ori $5, $0, 0x3014
jalr $6, $5
#jr $5
addu $6, $6, $0
nop
subu $5, $5, $5
addu $7, $5, $0
lui $6, 0xff