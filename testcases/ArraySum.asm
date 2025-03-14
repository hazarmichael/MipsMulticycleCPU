;sum array elements in address 80 to 87

addi r12, r0, 80 ;address of the array
addi r14, r0, 87 ;address of the last element
addi r1, r0, 0 ;sum
loop :
		bgt r12, r14, endloop
		lw_poi r2, r12, 0
		add r1, r1, r2
		jmp loop

endloop : addi r3, r1, 0


