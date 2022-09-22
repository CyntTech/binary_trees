#include "binary_trees.h"

/**
 * binary_tree_insert_left - this function creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *lnode = NULL;

	if (parent == NULL)
		return (NULL);

	lnode = binary_tree_node(parent, value);
	if (lnode == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = lnode;
	}
	else
	{
		lnode->left = parent->left;
		parent->left = lnode;
		lnode->left->parent = lnode;
	}

	return (lnode);
}
