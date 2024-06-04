#include "binary_tree.h"

/**
 * binary_tree_insert_right - INsert a new node in the right side
 * @parent: Node to insert the right child
 * @value: Value of the new node
 *
 * Return: Pointer to the new node otherwise NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
