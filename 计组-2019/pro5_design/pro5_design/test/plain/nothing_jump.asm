ori $t0, $0, 0
nop
nop
nop
nop
ori $t1, $0, 1
nop
nop
nop
nop
ori $t2, $0, 2
nop
nop
nop
nop
loop:
	beq $t0, $t2, end
	nop
	nop
	nop
	nop
	addu $t0, $t0, $t1
	nop
	nop
	nop
	nop
	j loop
	nop
	nop
	nop
	nop
end:
	lui $t3, 1
	nop
	nop
	nop
	nop
