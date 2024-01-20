#include "monty.h"

/**
 * m_pint - A function that print stack backwards.
 * @stack: pointer to head.
 * @line_number: line number.
 * void function: print stack backwards.
 */
void m_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || stack == NULL)
	{
		dprintf(2, "L%u: can't pint, stack empty\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
