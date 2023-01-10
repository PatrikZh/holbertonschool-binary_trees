#include "binary_trees.h"

/**
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new || !parent)
		return (NULL);
	new->n = value;	
	if (parent->left)
	{
		parent->left->parent = new;
		new->left = parent->left;
		new->parent = parent;
	}
	parent->left = new;

	return (new);
	
}
