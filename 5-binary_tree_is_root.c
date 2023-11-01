#include "binary_trees.h"
/**
 * binary_tree_is_root - check if a node is root
 * @node: node to check
 * Return: if root 1 if not 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	return (1);
}
