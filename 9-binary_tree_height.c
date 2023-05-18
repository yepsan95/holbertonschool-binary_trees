#include "binary_trees.h"

/**
 * binary_tree_height - measures the heigth of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);
	
	if (tree->parent == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height > r_height)
		return (l_height + 1);
	else
		return (r_height + 1);
}
