#include "binary_trees.h"

/**
 * binary_tree_leaves - leaves counter in a binary tree.
 *
 * @tree: the root node pointer.
 *
 * Return: the result or 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t SumOfLeaves = 0;

	if (tree)
	{
		SumOfLeaves += (!tree->left && !tree->right) ? 1 : 0;
		SumOfLeaves += binary_tree_leaves(tree->left);
		SumOfLeaves += binary_tree_leaves(tree->right);
	}

	return (SumOfLeaves);
}
