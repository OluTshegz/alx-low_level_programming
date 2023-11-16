; Entry point of the program
global main
extern printf

main:
    ; Load the address of the format string into edi register
    mov edi, format

    ; Clear the eax register (indicating no additional floating-point registers used)
    xor eax, eax

    ; Call the printf function with the format string
    call printf

    ; Set the return value to 0 (return code)
    mov eax, 0

    ; Return from the main function
    ret

; Define the format string with a null terminator
format: db `Hello, Holberton\n`, 0
