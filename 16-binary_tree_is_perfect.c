#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the binary tree to check
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_perfect, size_l, size_r;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_is_full(tree) == 0)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		size_l = binary_tree_size(tree->left);
		size_r = binary_tree_size(tree->right);
	}

	if (size_l == size_r)
		is_perfect = 1;
	else
		is_perfect = 0;

	return (is_perfect);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree->left) + 1;
	size = binary_tree_size(tree->right) + size;

	return (size);
}

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
