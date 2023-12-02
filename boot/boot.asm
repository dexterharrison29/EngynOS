ORG 0
BITS 16
_start:
    jmp short start
    nop

 times 33 db 0
start:
    jmp 0x7c0:step2
step2:
    cli ;clear interrupts
    mov ax, 0x7c0
    mov ds, ax
    mov es, ax
    mov ax, 0x00
    mov ss, ax
    mov sp, 0x7c00
    sti ;enable interrupts
    mov si, message ;does some shit
    call print
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
message: db "EngynOS Bootloader test!", 0 ;; The only logical thing here
times 510-  ($ - $$) db 0  ;What the fuck???
dw 0xAA55 ; this is important i think
