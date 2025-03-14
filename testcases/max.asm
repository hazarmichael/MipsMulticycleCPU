addi r1, r0, 50
addi r2, r0, 123

call max
addi r10, r0, 999


max :

	bgt r1, r2, else
	    addi r3, r2, 0
		jmp endif
	else :
		addi r3, r1, 0
	endif : ret
