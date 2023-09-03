#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node.
 * @node: pointer to the node to find the uncle.
 *
 * Return: pointer to the uncle.
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left && node->parent->parent->right)
	{
		if (node->parent->parent->left->n != node->parent->n)
			return (node->parent->parent->left);

		else if (node->parent->parent->right->n != node->parent->n)
			return (node->parent->parent->right);

		else
			return (NULL);
	}
	else
		return (NULL);
}
