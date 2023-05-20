#include "binary_trees.h"

/**
 * binary_tree_nodes- counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root of the tree to count the number of nodes
 *
 * Return: number of nodes with at least 1 child. If tree is NULL, return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	nodes = binary_tree_nodes(tree->left) + nodes;
	nodes = binary_tree_nodes(tree->right) + nodes;

	if ((tree->left != NULL || tree->right != NULL))
		return (nodes + 1);

	return (nodes);
}
