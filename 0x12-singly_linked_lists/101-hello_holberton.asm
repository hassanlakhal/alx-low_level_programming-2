section .data
text: db "Hello, Holberton", 0

section .text
global main
extern printf

main:
	mov rdi, text
	xor eax, eax
	call printf
	mov eax, 0
	ret
