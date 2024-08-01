SECTION .data
message db "Hello, Holberton", 0
format db "%s", 10, 0

SECTION .text
extern printf
global _start

_start:
    ; Load the address of the message into the RSI register
    mov rsi, message
    ; Load the address of the format string into the RDI register
    mov rdi, format
    ; Clear the RAX register (no floating point arguments)
    xor rax, rax
    ; Call the printf function
    call printf
    ; Exit the program (if using Linux system calls)
    ; Move exit code 0 into RDI register
    mov rdi, 0
    ; Use syscall number for exit (60) into RAX register
    mov rax, 60
    ; Perform the syscall
    syscall
