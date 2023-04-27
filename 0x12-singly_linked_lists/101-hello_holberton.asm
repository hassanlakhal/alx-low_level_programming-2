		section .data
	global text
text: db "Hello, Holberton", 10, 0

		section .text
	global main
	extern printf

main:
	mov edi, text
	xor eax, eax
	call printf
	xor eax, eax
	ret
