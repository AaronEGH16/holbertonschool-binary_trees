#include "binary_trees.h"

/**
 * binary_tree_preorder -
 *
 * @tree:
 * @func:
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;

    binary_tree_preorder(tree->left, func((tree->left)->n));
    binary_tree_preorder(tree->right, func((tree->right)->n));
    return (func());
}
