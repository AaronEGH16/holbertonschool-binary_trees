#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leavels.
 * @tree: pointer to the root node.
 *
 * Return: Number of leaves.
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size_l = 0, size_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size_l = binary_tree_leaves(tree->left);
	size_r = binary_tree_leaves(tree->right);

	return (size_l + size_r);
}
