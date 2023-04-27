		section .data
text: db "Hello, Holberton", 0

		section .text
		global main
		extern printf
main:
	mov rdi, text
	xor rax, rax
	call printf
	xor eax, eax
	mov eax, 0
	ret
