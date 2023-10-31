#include "binary_trees.h"

/**
 * binary_tree_node - create a node of a binary tree
 *
 * @parent: A pointer to parent.
 * @value: The value to insert.
 *
 * Return: a pointer tothe new node - if fail - NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new != NULL)
	{
		new->n = value;
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
	}
	return (new);
}
