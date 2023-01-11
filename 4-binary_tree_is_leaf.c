#include "binary_trees.h"

/**
* binary_tree_is_leaf - fun thing i learned about the ?
* c condition, it's very neat.
* @node: node
* Return: the condition neccesary to find a leaf
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !node->right && !node->left ? 1 : 0);
}

