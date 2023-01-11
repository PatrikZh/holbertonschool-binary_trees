#include "binary_trees.h"

/**
* binary_tree_is_root - checks if the node is the root
* using the previous ? and :
* @node: node being checks
* Return: 1 if root 0 if not
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent ? 1 : 0);
}
