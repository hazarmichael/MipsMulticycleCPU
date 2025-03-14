; implementing multiplication

addi r1, r0, 23
addi r2, r0, 12
call mul
jmp end

; function that takes args in r1 and r2 and
; returns multiplication in r3

mul :

	push r2 ; preserving operands

	addi r3, r0, 0 ;result

	loop : beq r2, r0, endloop
	       addi r2, r2, -1
		   add r3, r3, r1
		   jmp loop

	endloop :
	pop r2
	ret

end : addi r8, r0, 999 ;indicates the end of the program


