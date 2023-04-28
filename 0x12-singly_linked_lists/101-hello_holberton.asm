section .data
message db 'Hello, Holberton',10,0

section .text
global main
extern printf

main:
mov edi,message
xor eax,eax
call printf
ret
