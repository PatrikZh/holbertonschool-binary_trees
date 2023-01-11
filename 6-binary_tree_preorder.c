#include "binary_trees.h"

/**
* binary_tree_preorder - prints out a binary tree preorderly
* @tree: the tree
* @func: function to print out the data
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
