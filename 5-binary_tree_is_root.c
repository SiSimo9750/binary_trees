#include "binary_trees.h"

/**
 * binary_tree_is_root - a root checker.
 *
 * @node: node to check pointer.
 *
 * Return: 1 if succes, and 0 if it fails.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
