#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor of the tree. If tree if NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bf;

	if (tree == NULL)
		return (0);

	bf = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (bf);
}
