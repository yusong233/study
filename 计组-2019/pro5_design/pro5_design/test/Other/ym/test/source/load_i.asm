ori $fp, $fp, 4
sw $fp, ($zero)
sw $fp, 4($zero)
sw $fp, 8($zero)
sw $fp, 0xc($zero)
sw $fp, 0x10($zero)
sw $fp, 0x14($zero)
sw $fp, 0x18($zero)
sw $fp, 0x1c($zero)
sw $fp, 0x20($zero)
sw $fp, 0x24($zero)
sw $fp, 0x28($zero)
sw $fp, 0x2c($zero)
ori $a0, $a0, 4
ori $a1, $a1, 4
addu $a0, $a0, $a1
nop 
nop 
lw $a1, ($a0)
nop 
nop 
nop 
nop 
ori $a2, $a2, 4
ori $a3, $a3, 4
ori $a2, $a3, 4
nop 
nop 
lw $a3, ($a2)
nop 
nop 
nop 
nop 
ori $t0, $t0, 4
ori $t1, $t1, 4
lw $t0, ($t1)
nop 
nop 
lw $t1, ($t0)
nop 
nop 
nop 
nop 
ori $t2, $t2, 4
ori $t3, $t3, 4
addu $t2, $t2, $t3
nop 
lw $t3, ($t2)
nop 
nop 
nop 
nop 
nop 
ori $t4, $t4, 4
ori $t5, $t5, 4
ori $t4, $t5, 4
nop 
lw $t5, ($t4)
nop 
nop 
nop 
nop 
nop 
ori $t6, $t6, 4
ori $t7, $t7, 4
lw $t6, ($t7)
nop 
lw $t7, ($t6)
nop 
nop 
nop 
nop 
nop 
ori $s0, $s0, 4
ori $s1, $s1, 4
addu $s0, $s0, $s1
lw $s1, ($s0)
nop 
nop 
nop 
nop 
nop 
ori $s2, $s2, 4
ori $s3, $s3, 4
ori $s2, $s3, 8
lw $s3, ($s2)
