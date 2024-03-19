#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts the left-child node of another node.
 *
 * @parent: node to insert pointer.
 * @value: new node value.
 *
 * Return: A pointer to the created node, NULL if it fails.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewToInsert;

	if (parent == NULL)
		return (NULL);

	NewToInsert = binary_tree_node(parent, value);
	if (NewToInsert == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		NewToInsert->left = parent->left;
		parent->left->parent = NewToInsert;
	}
	parent->left = NewToInsert;

	return (NewToInsert);
}
