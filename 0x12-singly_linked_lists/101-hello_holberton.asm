global _start

section .tect

_start:
	MOV rac, 0x1
	MOV rdi, 0x1
	MOV rsi, msg
	MOV rdx, msglength

	MOV rax, 0x3C
	MOV rdi, 0x0
	SYSCALL

section .data
	msg: DB "Hello, Holberton", 0xA
	msglength: EQU $ - msg;
