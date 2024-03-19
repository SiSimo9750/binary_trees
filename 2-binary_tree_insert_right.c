#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts the right-child node of another node.
 *
 * @parent: node to insert pointer.
 * @value: new node value.
 *
 * Return: A pointer to the created node, NULL if it fails.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NewToInsert;

	if (parent == NULL)
		return (NULL);

	NewToInsert = binary_tree_node(parent, value);
	if (NewToInsert == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		NewToInsert->right = parent->right;
		parent->right->parent = NewToInsert;
	}
	parent->right = NewToInsert;

	return (NewToInsert);
}
