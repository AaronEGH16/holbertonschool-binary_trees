#include "binary_trees.h"

/**
 * check_is_perfect - Check if a tree is perfect.
 * @tree: pointer to parent node (child of the root).
 *
 * Return: 0 (if a node have 2 or 0 children), 1 Otherwise.
*/

int check_is_perfect(const binary_tree_t *tree)
{
	int site_l = 0, site_r = 0, flag = 0;

	if (tree == NULL)
		return (0);

	if ((!(tree->left) && tree->right) || (tree->left && !(tree->right)))
	{
		flag = -5;
	}
	site_l = check_is_perfect(tree->left);
	site_r = check_is_perfect(tree->right);

	return ((site_l + site_r + 1) - flag);
}

/**
 * binary_tree_is_perfect - Check is a binary tree is perfect.
 * @tree: pointer to the root.
 *
 * Return: 1 (is perfect). 0 otherwise.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int  retu_l = 0, retu_r = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		retu_l = check_is_perfect(tree->left);
		retu_r = check_is_perfect(tree->right);

		return ((retu_l == retu_r) ? 1 : 0);
	}
	else
		return (0);
}
