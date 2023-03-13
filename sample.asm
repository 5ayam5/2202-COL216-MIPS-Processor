main:
	addi	$t0, $0, 10
	add		$t1, $0, $0
	addi	$s1, $zero, 320
loop:
	beq		$t1, $t0, exit
	sw		$s0, 12($s1)
	addi	$s0, $s0, 100
	addi	$t1, $t1, 1
	j		loop

exit: