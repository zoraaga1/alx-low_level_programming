section .data
	hello_msg db "Hello, Holberton", 10   ; Newline added at the end
	fmt db "%s", 0   ; Format string for printf

section .text
	global main
	extern printf

main:
	; Clear the floating-point status word to avoid printf issues on some systems
	finit

	; Pass the format string to printf
	mov rdi, fmt

	; Pass the address of hello_msg string to printf
	mov rsi, hello_msg

	; Call printf to print the message
	xor rax, rax   ; Clear RAX (return value for printf)
	call printf

	; Exit the program
	xor rdi, rdi   ; Exit code 0
	mov rax, 60    ; System call number for exit (60)
	syscall

