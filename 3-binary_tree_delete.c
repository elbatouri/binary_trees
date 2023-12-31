#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * if both node left and right NULL
 * @tree: tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
	{
		if (tree == NULL)
		{
			return;
		}
		else
		{
			if (tree != NULL)
			{
				binary_tree_delete(tree->left);
				binary_tree_delete(tree->right);
			}
			free(tree);
		}
	}
