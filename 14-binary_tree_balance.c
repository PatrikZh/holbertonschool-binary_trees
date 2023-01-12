#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	return (left - right);
}
