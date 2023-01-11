#include "binary_trees.h"


/**
* binary_tree_postorder - useful for deleting the trees easier
* @tree: the tree
* @func: the functiom to print the data
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
