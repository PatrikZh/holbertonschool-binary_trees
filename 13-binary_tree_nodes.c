#include "binary_trees.h"

/**
* binary_tree_nodes - counts all nodes at least partially full
* @tree: treebeard
* Return: non empty node nr
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
}
