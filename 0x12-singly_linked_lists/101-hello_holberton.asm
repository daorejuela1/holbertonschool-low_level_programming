        SECTION .data
msg:    db "Hello, Holberton\n", 0
fmt:    db "%s", 10, 0

        SECTION .text
        extern printf
        global main, _start
main:
_start:
        mov esi, msg    ; pass message to esi
        mov edi, fmt    ; pass formart to esi
        mov eax, 0      ; indicate number of non-integer arguments
        call printf

        mov ebx, 0      ; normal-exit code
        mov eax, 1      ; process-termination service
        int 0x80        ; linux kernel service
