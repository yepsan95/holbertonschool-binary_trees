#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 *                           of another node
 * @parent: pointer to the parent node of the node to insert
 *          the right-child in
 * @value: is the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);
	right_child = malloc(sizeof(binary_tree_t));
	if (right_child == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		right_child->right = parent->right;
		parent->right->parent = right_child;
	}
	else
	{
		right_child->right = NULL;
	}
	right_child->parent = parent;
	parent->right = right_child;
	right_child->n = value;
	right_child->left = NULL;

	return (right_child);
}
