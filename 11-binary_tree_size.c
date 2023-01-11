#include "binary_trees.h"

/**
* binary_tree_size - size said tree
* @tree: treebert
* Return: that of which belongs to me
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = tree->left ? 0 + binary_tree_size(tree->left) : 0;
	right = tree->right ? 0 + binary_tree_size(tree->right) : 0;
	return (right + left + 1);

}
