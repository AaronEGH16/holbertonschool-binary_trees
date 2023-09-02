#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child.
 * @tree: pointer to the root.
 *
 * Return: Number of nodes with at least 1 child.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0, size_l = 0, size_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		size++;

	size_l = binary_tree_nodes(tree->left);
	size_r = binary_tree_nodes(tree->right);

	return (size_l + size_r + size);
}
