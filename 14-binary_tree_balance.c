#include "binary_trees.h"

/**
 * height_tree - get a height of a tree.
 * @tree: pointer to a parent node (child of the root).
 *
 * Return: height of the tree.
*/

int height_tree(const binary_tree_t *tree)
{
	int size_l = 0, size_r = 0, resu = 0;

	if (tree == NULL)
		return (0);

	size_l = height_tree(tree->left);
	size_r = height_tree(tree->right);
	resu = size_l > size_r ? size_l : size_r;
	return (resu + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root.
 *
 * Return: Balance factor of the binary tree.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int cant_left = 0, cant_right = 0;

	cant_left = height_tree(tree->left);
	cant_right = height_tree(tree->right);
	return (cant_left - cant_right);
}
