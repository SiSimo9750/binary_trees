#include "binary_trees.h"

/**
 * binary_tree_balance - calculat a binary tree balance factor.
 *
 * @tree: root node pointer.
 *
 * Return: the result or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - calculate a binary tree height.
 *
 * @tree: the root node pointer.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t le = 0, ri = 0;

		le = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		ri = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((le > ri) ? le : ri);
	}

	return (0);
}
