section .data
	message db "Hello, Holberton", 10, 0

section .text
	global main

extern printf

main:
	; prepare arguments for printf
	mov edi, message
	xor eax, eax ; set AL to 0 for printf format string
	; call printf
	call printf
	; return 0 to indicate success
	xor eax, eax
	re
