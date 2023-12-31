#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function to check if node is leaf
 *
 * @node: node to check
 *
 * Return: 1 if node is leaft, otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!(node->left) && !(node->right))
		return (1);
	else
		return (0);
}
