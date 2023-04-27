global main

extern printf

section .data
    format db "Hello, Holberton\n", 0

section .text
main:
    mov rdi, format ; set first argument (format string)
    xor eax, eax ; clear EAX (no floating-point arguments)
    call printf ; call printf function
    xor eax, eax ; set return value to 0 (success)
    ret ; return from function

