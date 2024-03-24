#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
size_t depth(const binary_tree_t *tree);
unsigned char is_leaf(const binary_tree_t *node);

/**
 * binary_tree_is_perfect - to checks the perfectnes of a binary tree.
 *
 * @tree: the root node pointer.
 *
 * Return: the result and 0 if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
/**
 * depth - calculate a binary tree depth.
 *
 * @tree: the root node pointer.
 *
 * Return: the depth or 0 if tree is NULL.
 */
size_t depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - Returns a binary tree leaf.
 * @tree: the root node pointer.
 *
 * Return: A pointer to the first leaf occurence.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - Checks if a binary tree is perfect recursively.
 * @tree: the root node pointer..
 * @leaf_depth: one leaf depth.
 * @level: current node level
 *
 * Return: one if the tree is perfect, an 0 if not
 */
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
		is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * is_leaf - a leaf check
 *
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a leaf, and 0 if not.
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
