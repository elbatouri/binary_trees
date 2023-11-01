#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check the node left right
 * if the node is a leaf
 * @node: node to check
 * Return: if it is leaf 1, if not 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
