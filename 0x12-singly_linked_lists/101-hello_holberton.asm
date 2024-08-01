section .data
    msg db 'Hello, Holberton', 0xa  ; String to print with newline character
    len equ $ - msg                 ; Length of the string

section .text
    extern printf
    global _start

_start:
    ; Prepare the arguments for printf
    mov rdi, fmt                   ; Format string
    mov rsi, msg                   ; Message to print
    call printf                    ; Call printf

    ; Exit the program
    mov rax, 60                    ; syscall: exit
    xor rdi, rdi                   ; status: 0
    syscall                        ; invoke syscall

section .data
    fmt db '%s', 0                 ; Format string for printf
