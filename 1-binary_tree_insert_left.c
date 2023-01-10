#include "binary_trees.h"
/**
* binary_tree_node - new node to add
* @parent: parent node
* @value: value assigned to its data
* Return: new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_left;

	insert_left = malloc(sizeof(binary_tree_t));
	if (!parent || !insert_left)
		return (NULL);
	insert_left->n = value;
	if (parent->left)
	{
		insert_left->left = parent->left;
		parent->left->parent = insert_left;
		insert_left->parent = parent;
	}
	parent->left = insert_left;
	return (insert_left);
}
