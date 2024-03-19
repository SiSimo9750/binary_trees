#include "binary_trees.h"

/**
 * binary_tree_preorder - use pre-order traversal to go throght a binary tree
 *
 * @tree: the root node pointer.
 * @func: function pointer.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
