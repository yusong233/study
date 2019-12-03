ori $t0, $0, 1
nop
nop
nop
nop
jal try
ori $t1, $0, 3
nop
nop
nop
nop
ori $t2, $0, 4
nop
nop
nop
nop
j end
try:
	lui $t3, 2
	nop
	nop
	nop
	nop
	jr $ra
end:
	lui $t4, 5
	nop
	nop
	nop
	nop