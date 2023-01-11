#include "binary_trees.h"
/**
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *root;

	if (tree == NULL)
		return;
	root = binary_tree_node(NULL, 98);
	tree->left->right = root;
	free(root);
}
