#include "binary_trees.h"

/**
 * binary_tree_is_full - chekcs if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the binary tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full_l, is_full_r;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		is_full_l = binary_tree_is_full(tree->left);
		is_full_r = binary_tree_is_full(tree->right);
		if (is_full_l == 1 && is_full_r == 1)
			return (1);
	}

	return (0);
}
