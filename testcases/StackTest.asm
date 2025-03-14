addi r4, r0, 122
addi r5, r0, 1244
addi r6, r0, 12321
push r4
push r5
push r6
pop r6
pop r7
pop r8
add r10, r7, r8
addi r15, r0, 10
sw r10, 0(r15)