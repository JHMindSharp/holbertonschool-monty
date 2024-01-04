#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @stack: Pointer to the top of the stack.
 * @n: Integer value to push onto the stack.
 * @arg: Arguments (not used in this function).
 *
 * Description:
 * - This function represents the "push" Monty bytecode instruction.
 * - It pushes an integer value (@n) onto the top of the stack.
 * - The function receives a pointer to the stack, an integer
 * value (@n) to push, and an additional
 * argument (not used in this function).
 *
 * Return: None.
 */
void push(stack_t **stack, unsigned int n, const char *arg)
{
	stack_t *new_node;
	int num;

	if (arg == NULL || !is_numeric(arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", n);
		exit(EXIT_FAILURE);
	}

	num = atoi(arg);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}
