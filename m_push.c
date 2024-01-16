#include "monty.h"
/**
 * m_push - A function that it pushes an
 * element to the stack.
 * @stack: pointer to head
 * @line_number: line number
 * void function: pushes elements to the stack
 */
void m_push(stack_t **stack, unsigned int line_number)
{
	int indx;
	char *alpha;

	alpha = strtok(NULL, SEPARATOR);

	if (alpha == NULL)
	{
		dprintf(2, "L%u: usage: push integer\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	indx = atoi(alpha);
	if (indx == 0 && strcmp(alpha, "0") != 0)
	{
		dprintf(2, "L%u: usage: push integer\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	if (add_node(stack, indx) == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		free_all();
		exit(EXIT_FAILURE);
	}
}
