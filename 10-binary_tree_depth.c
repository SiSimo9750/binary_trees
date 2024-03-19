#include "binary_trees.h"

/**
 * binary_tree_depth - calculate a binary tree depth.
 *
 * @tree: the root node pointer.
 *
 * Return: the depth or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
