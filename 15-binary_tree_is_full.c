#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree);
int is_full_recursive(const binary_tree_t *tree);

/**
 * binary_tree_is_full - binary tree is full or not.
 *
 * @tree: root node pointer.
 *
 * Return:result and 0 if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}

/**
 * is_full_recursive - Checks if the tree is recursively full.
 *
 * @tree: root node pointer.
 *
 * Return: result and 0 if tree is not NULL, otherwise 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)

			return (0);
	}

	return (1);
}
