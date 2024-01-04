#include "monty.h"

/**
 * pall - Prints all the values on the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the bytecode file.
 *
 * Description:
 * - This function represents the "pall" Monty bytecode instruction.
 * - It prints all the values currently on the stack, starting from the
 * top (most recent) to the bottom.
 * - The function receives a pointer to the stack and the current line number
 * for potential error reporting.
 *
 * Return: None.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
