#include "binary_trees.h"

/**
 * binary_tree_size - calculate a binary tree size.
 *
 * @tree: the root node pointer.
 *
 * Return: the size or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t TreeSize = 0;

	if (tree)
	{
		TreeSize += 1;
		TreeSize += binary_tree_size(tree->left);
		TreeSize += binary_tree_size(tree->right);
	}

	return (TreeSize);
}
