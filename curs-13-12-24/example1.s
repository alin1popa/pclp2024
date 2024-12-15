	.file	"example1.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "Hello, World!\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rdi
	.seh_pushreg	%rdi
	subq	$440, %rsp
	.seh_stackalloc	440
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	call	__main
	leaq	-96(%rbp), %rdx
	movl	$0, %eax
	movl	$50, %ecx
	movq	%rdx, %rdi
	rep stosq
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	puts
	movl	$0, %eax
	addq	$440, %rsp
	popq	%rdi
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 11.4.0"
	.def	puts;	.scl	2;	.type	32;	.endef
