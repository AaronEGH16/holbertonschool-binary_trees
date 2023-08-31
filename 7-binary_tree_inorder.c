#include "binary_trees.h"

/**
 * binary_tree_inorder - execute func command in traversal order
 *
 * @tree: address of the tree
 * @func: function to execute
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
