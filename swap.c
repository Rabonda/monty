#include "monty.h"

/**
 * m_swap - A function that swaps the top two elements of the stack.
 * @stack: double pointer to the top (head) of the stack.
 * @line_number: counter for line.
 *
 * void function: swaps the top two elements of the stack.
 */
void m_swap(stack_t **h, unsigned int line_number)
{
	stack_t *temporary;

	if (h == NULL || *h == NULL || !((*h)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free_stack_t(*h);

		exit(EXIT_FAILURE);
	}

	temporary = *h;
	*h = (*h)->next;
	(*h)->prev = NULL;
	if ((*h)->next)
		((*h)->next)->prev = temporary;
	temporary->next = (*h)->next;
	(*h)->next = temporary;
	temporary->prev = *h;
}
