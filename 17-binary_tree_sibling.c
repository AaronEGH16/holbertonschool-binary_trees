#include   "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling node.
 * @node: pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node.
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (!node || !node->parent)
		return (NULL);

	sibling = malloc(sizeof(binary_tree_t));
	if (!sibling)
		return (NULL);

	sibling = node->parent;

	if (sibling && sibling->left->n != node->n)
		sibling = sibling->left;

	else if (sibling && sibling->right->n != node->n)
		sibling = sibling->right;

	else
		return (NULL);
	
	return (sibling);
}
