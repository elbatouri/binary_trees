#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with
 * at least 1 child in a binary tree
 * @tree: the tree to count its nodes
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t numberNode = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		numberNode += ((tree->left || tree->right) ? 1 : 0);
		numberNode += binary_tree_nodes(tree->left);
		numberNode += binary_tree_nodes(tree->right);
		return (numberNode);
	}
}
