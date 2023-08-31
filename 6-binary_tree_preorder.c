#include "binary_trees.h"

/**
 * binary_tree_preorder - execute func command in traversal order
 *
 * @tree: address of the tree
 * @func: function to execute
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
