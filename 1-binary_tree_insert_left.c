#include "binary_trees.h"

/**
 * binary_tree_insert_left - create and insert new node in left side of parent
 *
 * @parent: parent node
 * @value: value of the new node
 *
 * Return: address of the new node or NULL if parent is NULL or fail
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	if (!parent->left)
		new_node->left = NULL;
	else
	{
		new_node->left = parent->left;
		(parent->left)->parent = new_node;
	}
	new_node->right = NULL;
	parent->left = new_node;

	return (new_node);
}
