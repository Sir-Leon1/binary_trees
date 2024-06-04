#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: Node to be checked
 *
 * Return: 1 on success 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
