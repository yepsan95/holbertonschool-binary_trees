#include "binary_trees.h"

/**
 * binary_tree_is_full - chekcs if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the binary tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);

	if ((tree->left != NULL && tree->right != NULL) ||
			(tree->left == NULL && tree->right == NULL))
		return (1);
	else
		return (0);
}
