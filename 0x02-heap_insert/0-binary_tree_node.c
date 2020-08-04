#include "binary_trees.h"

/**
 *binary_tree_node - entry point
 *@parent: is a pointer to the parent node of the node to create
 *@value: is the value to put in the new node
 *Return: a pointer to the parent node or null.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    node = malloc(sizeof(binary_tree_t));

    if (node == NULL)
      return (NULL);

    /* checks if the node was malloc */

    node->left = NULL;
    node->right = NULL;
    /* sets the value to the node */
    node->n = value;
    node->parent = parent;

    return (node);
}
