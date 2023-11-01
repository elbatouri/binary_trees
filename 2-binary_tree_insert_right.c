#include "binary_trees.h"

/**
 * binary_tree_insert_right - add in the right of the parrent a new node
 * and if the node exist you add the new note to the down level
 * @parent: the parent of the node
 * @value: value in the node
 * Return: if it fail null if not new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
        if (parent->right != NULL)
        {
                new->right = parent->left;
                parent->right->parent = new;
        }
        parent->right = new;
        return (new);
        }
