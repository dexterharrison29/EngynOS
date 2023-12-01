ORG 0x7c00
BITS 16
start:
    mov ah, 0eh
    mov al, 'A' ;Character to be output
    mov bx, 0 ; Page number
    int 0x10 ; Calls the BIOS, tells it to output al register;
    jmp $
times 510-  ($ - $$) db 0  ;What the fuck???
dw 0xAA55 ; this is important i think
