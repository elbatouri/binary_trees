<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: the parent node
 * @value: the value to be inserted
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return NULL;

	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return new_node;
}
=======
#include "binary_trees.h"

/**
 * binary_tree_insert_left - add in the left of the parrent a new node
 * and if the node exist you add the new note to the down level
 * @parent: the parent of the node
 * @value: value in the node
 * Return: if it fail null if not new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}

	new = binary_tree_node(parent, value);
	if (new == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
	}
>>>>>>> b3992579985337fd51d9159089a6dc5a448ff654
