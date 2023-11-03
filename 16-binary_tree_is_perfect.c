#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * height - calculates the height of certain subtree
 * @node: a pointer to the node
 *
 * Return: the height of the currect subtree
 */
int height(const binary_tree_t *node)
{
	int lheight, rheight;

	if (node == NULL)
		return (0);
	lheight = height(node->left);
	rheight = height(node->right);

	return (1 + (lheight > rheight ? lheight : rheight));
}

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: a pointer to the root of the tree
 *
 * Return: 1 if perfect or 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftheight, rightheight, perfectl, perfectr;

	if (tree == NULL)
		return (1);

	leftheight = height(tree->left);
	rightheight = height(tree->right);

	if (leftheight == rightheight || (leftheight == 0 && rightheight == 1)
	|| (leftheight == 1 && rightheight == 0))
	{
		perfectl = binary_tree_is_perfect(tree->left);
		perfectr = binary_tree_is_perfect(tree->right);

		return (perfectl && perfectr);
	}

	return (0);



}
