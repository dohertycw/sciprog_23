	.file	"printing.c"
	.section	.rodata
	.align 8
.LC2:
	.string	"Account: %d Subtotal: %.2f Total: %.2f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$1, -4(%rbp)
	movl	.LC0(%rip), %eax
	movl	%eax, -8(%rbp)
	movl	.LC1(%rip), %eax
	movl	%eax, -12(%rbp)
	movss	-12(%rbp), %xmm1
	cvtps2pd	%xmm1, %xmm1
	movss	-8(%rbp), %xmm0
	cvtps2pd	%xmm0, %xmm0
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$2, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC0:
	.long	1150964204
	.align 4
.LC1:
	.long	1173786870
	.ident	"GCC: (GNU) 4.8.5 20150623 (Red Hat 4.8.5-44)"
	.section	.note.GNU-stack,"",@progbits
