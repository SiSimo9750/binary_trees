#include "binary_trees.h"

/**
 * binary_tree_sibling - node sibling finder.
 *
 * @node: node target pointer.
 *
 * Return: the result or NULL otherwise.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
