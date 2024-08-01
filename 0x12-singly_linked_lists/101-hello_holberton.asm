SECTION .data
msg:    db "Hello, Holberton", 0   ; Null-terminated string to print
fmt:    db "%s", 0                ; Format string for printf

SECTION .text
extern printf
global main

main:
    ; Prepare arguments for printf
    mov rdi, fmt     ; Format string as the first argument
    mov rsi, msg     ; Message string as the second argument

    ; Call printf
    call printf

    ; Exit the program
    mov eax, 0       ; Return 0 status
    ret
