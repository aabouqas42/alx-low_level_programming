section .data
	msg db "Hello, Holberton\n", 0ah
section .text
	global _start
_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 17
	syscall
	mov rax, 60
	xor rdi, 0
	syscall
	