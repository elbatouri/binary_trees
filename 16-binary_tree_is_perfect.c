#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: a pointer to the root of the tree
 *
 * Return: 1 if perfect or 0 if not
 */
int height(const binary_tree_t *node)
        {
                if (node == NULL)
                        return (0);
                return height(node->left);
        }

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftheight, rightheight, perfectl, perfectr;

	if (tree == NULL)
		return (1);

	leftheight = height(tree->left);
	rightheight = height(tree->right);

	if (leftheight == rightheight)
	{
		perfectl = binary_tree_is_perfect(tree->left);
		perfectr = binary_tree_is_perfect(tree->right);

		return perfectl && perfectr;
	}

	return (0);



}
