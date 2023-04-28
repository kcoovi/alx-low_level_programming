section .data
message db 'Hello, Holberton', 10, 0
section .text
	global main
	extern printf
main:
	push format
	call printf
	add esp, 4
	xor eax, eax
	ret
format: db `Hello, Holberton\n`, 0

