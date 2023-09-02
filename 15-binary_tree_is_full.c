#include "binary_trees.h"
#include <stdio.h>

/**
 * check_is_full - Check if a tree is full.
 * @tree: pointer to parent node (child of root).
 *
 * Return: 0 if a node have 2 or 0 child nodes. 1 Otherwise.
*/

int check_is_full(const binary_tree_t *tree)
{
	int size_l = 0, size_r = 0;

	if (tree == NULL)
		return (0);

	if ((!(tree->left) && tree->right) || (tree->left && !(tree->right)))
	{
		return (1);
	}
	size_l = check_is_full(tree->left);
	size_r = check_is_full(tree->right);

	return (size_l + size_r);
}

/**
 * binary_tree_is_full - Checks if is a full binary tree.
 * @tree: pointer to the root.
 *
 * Return: 1 (full), 0 otherwise.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int retu_l = 0, retu_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		retu_l = check_is_full(tree->left);
		if (retu_l > 0)
			return (0);

		retu_r = check_is_full(tree->right);
		if (retu_r > 0)
			return (0);
		return (1);
	}
	else
		return (0);
}
