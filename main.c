#include "monty.h"
/**
 * main - function for monty program
 *
 * @argc: number of arguments of the program
 * @argv: array of opcodes of the monty program
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	instruction_t opcode[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL},
	};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	return(0);
}
