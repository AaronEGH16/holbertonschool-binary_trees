#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node.
 * @tree: pointer to the node.
 *
 * Return: depth of a node.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = -1;

	if (!tree || !tree->parent)
		return (0);

	depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}
