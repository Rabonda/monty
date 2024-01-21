#include "monty.h"
/**
 * m_pall - A functiom that print the stack
 * @h: double pointer
 * @line_number: line count
 * void function: Print the stack
 */
void m_pall(stack_t **h, unsigned int line_number)
{
	(void)(line_number);

	if (*h && h)
		for (stack_t *temporary = *h; temporary; temporary = temporary->next)
			printf("%d\n", temporary->n);
}
