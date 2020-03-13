SECTION .data
msg: db "Hello, Holberton", 10
len: equ $- msg

SECTION .txt
global main

main:

mov rdi, 1
mov rax, 1
mov rsi, msg
mov rdx, len
syscall

mov rdi, 0
mov rax, 60
syscall
