section .data
    hello db 'Hello, Holberton', 10, 0  ; The string with newline and null terminator
    fmt db '%s', 0                      ; The format string for printf

section .text
    extern printf
    global _start

_start:
    ; Prepare the arguments for printf
    mov rdi, fmt         ; Format string
    mov rsi, hello       ; String to print

    ; Call printf
    call printf

    ; Exit the program
    mov eax, 60          ; syscall number for exit
    xor edi, edi         ; exit code 0
    syscall
