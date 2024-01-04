#include "monty.h"

/**
 * execute_monty_instruction - Execute a Monty bytecode instruction.
 * @instruction: The Monty bytecode instruction to execute.
 * @stack_head: Pointer to the top of the stack.
 * @line_number: The current line number in the bytecode file.
 *
 * Description: This function executes Monty bytecode instructions based on
 * the provided opcode. It calls the corresponding functions to perform
 * the specified operations. If an unknown opcode is encountered, it prints
 * an error message and exits with failure.
 *
 * Return: 1 if the instruction is executed successfully, 0 otherwise.
 */
int execute_monty_instruction(char *instruction, stack_t **stack_head,
unsigned int line_number)
{
	char *opcode = strtok(instruction, " \t\n");
	char *operand;

	if (!opcode)
	{
		fprintf(stderr, "L%u: Error: Missing opcode\n", line_number);
		return (0);
	}

	if (strcmp(opcode, "push") == 0)
	{
		operand = strtok(NULL, " \t\n");
		if (!operand || !is_numeric(operand))
		{
			fprintf(stderr, "L%u: Error: usage: push integer\n", line_number);
			return (0);
		}
		push(stack_head, atoi(operand));
	}
	else if (strcmp(opcode, "pall") == 0)
		pall(stack_head, line_number);
	else if (strcmp(opcode, "pint") == 0)
		pint(stack_head, line_number);
	else if (strcmp(opcode, "pop") == 0)
		pop(stack_head, line_number);
	else if (strcmp(opcode, "swap") == 0)
		swap(stack_head, line_number);
	else if (strcmp(opcode, "add") == 0)
		add(stack_head, line_number);
	else if (strcmp(opcode, "nop") == 0)
		nop(stack_head, line_number);
	else
	{
		fprintf(stderr, "L%u: Error: Unknown instruction %s\n", line_number, opcode);
		return (0);
	}

	return (1);
}

/**
 * is_numeric - Check if a string is a numeric integer.
 * @str: The string to check.
 *
 * Return: 1 if the string is a valid numeric integer, 0 otherwise.
 */
int is_numeric(const char *str)
{
	if (!str)
		return (0);

	if (str[0] == '-')
		str++;

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}