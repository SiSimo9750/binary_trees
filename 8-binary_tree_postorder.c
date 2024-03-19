#include "binary_trees.h"

/**
 * binary_tree_postorder - use post-order traversal to go throght a binary tree
 *
 * @tree: the root node pointer.
 * @func: function to call pointer.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
