#include "binary_trees.h"

/**
 * binary_tree_nodes - nodes counter with at least one child.
 *
 * @tree: root node pointer.
 *
 * Return: the result or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t SumOfNodes = 0;

	if (tree)
	{
		SumOfNodes += (tree->left || tree->right) ? 1 : 0;
		SumOfNodes += binary_tree_nodes(tree->left);
		SumOfNodes += binary_tree_nodes(tree->right);
	}

	return (SumOfNodes);
}
