#include "monty.h"

/**
 * pint - Prints the top element of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the bytecode file.
 *
 * Description:
 * - This function represents the "pint" Monty bytecode instruction.
 * - It prints the value of the top element (most recent) on the stack.
 * - The function receives a pointer to the stack and the current line number
 * for potential error reporting.
 *
 * Return: None.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
