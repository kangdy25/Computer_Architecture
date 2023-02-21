.globl main
main:
	push %ebp
	mov %esp, %ebp
	push $0x14
	push $age
	call printf
	mov $0x0, %eax
	leave 
	ret

age: .string "My age is %d\n"
