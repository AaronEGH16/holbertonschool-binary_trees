#include   "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling node.
 * @node: pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node.
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left && node->parent->right)
	{
		if (node->parent && node->parent->left->n != node->n)
			node = node->parent->left;

		else if (node->parent && node->parent->right->n != node->n)
			node = node->parent->right;

		else
			return (NULL);
	}

	return (node);
}
