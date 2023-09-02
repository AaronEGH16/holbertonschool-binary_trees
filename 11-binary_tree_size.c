#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: pointer to node.
 *
 * Return: Size of a binary tree.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_r = 0, size_l = 0;

	if (tree == NULL)
		return (0);

	size_l = binary_tree_size(tree->left);
	size_r = binary_tree_size(tree->right);

	return (size_l + size_r + 1);
}
