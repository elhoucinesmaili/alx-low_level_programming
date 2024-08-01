section .data
    msg db 'Hello, Holberton', 0   ; The message to print followed by a null terminator
    fmt db '%s', 0                 ; Format string for printf

section .text
    extern printf                  ; Declare printf function
    global _start                  ; Entry point for the program

_start:
    ; Prepare arguments for printf
    mov rdi, fmt                   ; Format string (first argument)
    mov rsi, msg                   ; Message to print (second argument)
    call printf                    ; Call printf function

    ; Exit the program
    mov rax, 60                    ; syscall number for exit
    xor rdi, rdi                   ; status code 0
    syscall                        ; invoke syscall to exit
