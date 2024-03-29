#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a leaf check
 *
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a leaf, and 0 if not.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
