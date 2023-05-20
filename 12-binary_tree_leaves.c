#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root of the tree to count the number of leaves
 *
 * Return: number of leaves. If tree is NULL, return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (1);

	leaves = binary_tree_leaves(tree->left);
	leaves = binary_tree_leaves(tree->right) + leaves;

	return (leaves);
}
