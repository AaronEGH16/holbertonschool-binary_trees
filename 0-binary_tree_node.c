#include "binary_trees.h"

/**
 * binary_tree_node - create a new node to the tree
 *
 * @parent: parent of the node
 * @value: value of the node content
 *
 * Return: the address of the new node or NULL in failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
