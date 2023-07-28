section .data
    hello_msg db "Hello, Holberton", 10   ; Newline added at the end

section .text
	global main

main:
	; File descriptor for standard output (1)
	mov rdi, 1

	; Pointer to the hello_msg string
	mov rsi, hello_msg

	; Length of the hello_msg string
	mov rdx, hello_msg_len

	; System call number for write (1)
	mov rax, 1

	; Invoke the write system call
	syscall

	; Exit the program
	xor rdi, rdi   ; Exit code 0
	mov rax, 60    ; System call number for exit (60)
	syscall

section .bss
	; Reserve space for a 64-bit variable to store hello_msg length
	hello_msg_len resq 1

