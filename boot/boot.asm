ORG 0x7c00
BITS 16
start:
    mov si, message ;does some shit
    call print ;I am honored to print text to the screen. Such a significant day in programming history, the day when I, Dexter Harrison, printed some text. This
    jmp $
print:
    mov bx, 0
.loop:
    lodsb
    cmp al, 0
    je .done
    call print_char
    jmp .loop
.done:
    ret
print_char:
    mov ah, 0eh
    int 0x10 ; Calls the BIOS, tells it to output al register;
    ret
message: db "EngynOS Bootloader test!", 0
times 510-  ($ - $$) db 0  ;What the fuck???
dw 0xAA55 ; this is important i think
