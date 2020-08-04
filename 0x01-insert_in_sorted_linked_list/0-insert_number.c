#include "lists.h"

/**
 * insert_node - insert node into list
 * @head: Top node of the linked list
 * @number: Number to put in new node
 * Return: Address of new node added
 */

listint_t *insert_node(listint_t **head, int number)
{
  listint_t *new_node = NULL;
  listint_t *temp = *head;

  new_node = malloc(sizeof(listint_t));

  /* checks if node was properly memory allocated */ 
  if (new_node == NULL)
    return (NULL);

  new_node->n = number;
  new_node->next = NULL;

  if (head == NULL || (*head)->n >= new_node->n)
    {
      new_node->next = *head;
      *head = new_node;
    }
  else
    {
      while (temp->next != NULL && temp->next->n < new_node->n)
	{
	  temp = temp->next;
	}
      new_node->next = temp->next;
      temp->next = new_node;
    }

  return (new_node);
}
