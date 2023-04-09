addi $t1, $0, 200
addi $t8, $0, 42
sw $t8, 8($t1)
addi $t3, $0, 3
addi $t4, $0, 12
addi $t7, $0, 100
sw $t7, 4($t1)
lw $t0, 4($t1)
add $t2, $t3, $t4
mul $t5, $t0, $t2
sw $t5, 4($t1)
lw $t6, 8($t1)
add $s0, $t6, $t5
