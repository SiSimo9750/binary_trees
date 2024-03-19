#include "binary_trees.h"

/**
 * binary_tree_inorder - it use in-order traversal to go throught binary tree.
 *
 * @tree: the root node pointer.
 * @func: function to call pointer.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
