#include "monty.h"

/**
 * free_stack - frees stack
 * @head: pointer to head node
 * Return: Nothing
*/
void free_stack(stack_t *head)
{
        stack_t *last;

        while (head != NULL)
        {
                last = head;
                head = head->next;
                free(last);
        }
        free(head);
}
