#include "monty.h"
/**
 * is_numeric - Checks if a string is a numeric value.
 * @str: The string to check.
 *
 * Description:
 * - This function checks if a given string (@str) represents a numeric value.
 * - It returns 1 if the string is numeric, and 0 otherwise.
 * - The function is used to validate whether an operand in a Monty bytecode
 * instruction is a numeric value.
 *
 * Return: 1 if the string is numeric, 0 otherwise.
 */
int is_numeric(const char *str)
{
	int i = 0;

	if (!str)
		return (0);

	if (str[0] == '-')
		i++;

	for (; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}

	return (1);
}

/**
 * free_stack - Frees a stack.
 * @stack: The stack to be freed.
 *
 * Description:
 * - This function is responsible for freeing the memory used by a stack
 * (doubly linked list) in the Monty bytecode interpreter.
 * - It takes a pointer to the stack as its parameter and deallocates all the
 * nodes and memory associated with the stack.
 *
 * Return: None.
 */
void free_stack(stack_t *stack)
{
	stack_t *temp;

	while (stack != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}
