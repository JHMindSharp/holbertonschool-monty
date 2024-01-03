#include "monty.h"

/**
 * main - Entry point for Monty bytecode interpreter
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: EXIT_SUCCESS if successful, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	stack_t *stack = NULL;
	char *line = NULL;
	size_t line_len = 0;
	ssize_t read = 0;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	FILE *file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &line_len, file)) != -1)
	{
		line_number++;
		execute_instruction(line, &stack, line_number);
	}

	free_stack(stack);
	free(line);
	fclose(file);

	return (EXIT_SUCCESS);
}
