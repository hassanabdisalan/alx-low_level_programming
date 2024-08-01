section .data
    hello db 'Hello, Holberton', 10, 0  ; The string to print, with newline and null terminator
    fmt db '%s', 0                      ; Format string for printf

section .text
    extern printf
    global _entry

_entry:
    ; Prepare the arguments for printf
    mov rdi, fmt         ; Format string
    mov rsi, hello       ; String to print

    ; Call printf
    call printf

    ; Exit the program
    mov eax, 60          ; syscall number for exit
    xor edi, edi         ; exit code 0
    syscall
