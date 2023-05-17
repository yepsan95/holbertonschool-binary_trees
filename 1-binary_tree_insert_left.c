#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left_child
 *                           of another node
 * @parent: pointer to the parent node of the node to insert
 *          the left-child in
 * @value: is the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);
	left_child = malloc(sizeof(binary_tree_t));
	if (left_child == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		left_child->left = parent->left;
		parent->left->parent = left_child;
		parent->left = left_child;
		left_child->parent = parent;
	}
	else
	{
		left_child->parent = parent;
		left_child->n = value;
		left_child->left = NULL;
		left_child->right = NULL;
	}

	return (left_child);
}
