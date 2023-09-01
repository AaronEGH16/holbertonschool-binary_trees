#include "binary_trees.h"

/**
 * max - return max between two sizes
 *
 * @a: size of a
 * @b: size of b
 *
 * Return: MAX
*/

size_t max(size_t a, size_t b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

/**
 * binary_tree_height - get the height of the tree
 *
 * @tree: address of the root to check
 *
 * Return: size of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t n;

	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);

	n = 1;

	n += max(binary_tree_height(tree->left), binary_tree_height(tree->right));

	return (n);
}
