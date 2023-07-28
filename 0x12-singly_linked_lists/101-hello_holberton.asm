section .data
    hello_msg db "Hello, Holberton", 0
    fmt db "%s", 10, 0   ; Format string for printf: %s for string and 10 for newline (ASCII code)

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, fmt         ; First argument: format string
    mov rsi, hello_msg   ; Second argument: address of hello_msg string
    xor rax, rax         ; Clear RAX (return value for printf)
    call printf
    pop rbp
    ret

