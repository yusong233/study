ori $5, $0, 0xffff
sra $5, $5, 4
lui $5, 0xffff
sw $5, 0($0)
lw $6, 0($0)
sra $6, $6, 4