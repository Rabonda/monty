#include "monty.h"
/**
 * m_pop - A function that delete element top of stack.
 * @h: double pointer to head.
 * @line_number: line number
 * Void function: returns delete element top of stack.
 */
void m_pop(stack_t **h, unsigned int line_number)
{
	stack_t *temporary;

	if (*h == NULL || h == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	temporary = *h;
	if (temporary->next)
	{
		temporary->next->prev = NULL;
		*h = temporary->next;
	}
	else
		*h = NULL;
	free(temporary);
}
