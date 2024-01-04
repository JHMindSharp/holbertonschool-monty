#include "monty.h"

/**
 * nop - Does nothing.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the bytecode file.
 *
 * Description:
 * - This function represents the "nop" Monty bytecode instruction, which
 * does nothing and serves as a placeholder.
 * - It receives a pointer to the stack and the current line number for
 * potential error reporting.
 * - The function's purpose is to maintain bytecode instruction alignment.
 *
 * Return: None.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	(void) stack;
}
