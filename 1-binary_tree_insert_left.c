#include "binary_tress.h"

/**
 * binary_tree_insert_left - add in the left of the parrent a new node 
 * and if the node exist you add the new note to the down level
 * @parent: the parent of the node
 * @value: value in the node
 * Return: NULL if fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}
	
	new = binary_tree_node(parent , value);
	if (new == NULL)
	{
		new = binary_tree_node(parent, value);
		if (new == NULL)
		{
			return (NULL);
		}
		if(parent->left !=NULL)
		{
			new->left = parent->left;
			parent->left > parent
		}
		parent->left = new;
		return (new_node
}
