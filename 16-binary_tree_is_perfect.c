#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the binary tree to check
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_perfect, is_perfect_l, is_perfect_r;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		is_perfect_l = binary_tree_is_perfect(tree->left);
		is_perfect_r = binary_tree_is_perfect(tree->right);
	}

	if (is_perfect_l == 1 && is_perfect_r == 1)
		is_perfect = 1;
	else 
		is_perfect = 0;

	return (is_perfect);
}
