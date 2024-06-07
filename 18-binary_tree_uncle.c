#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: node to find the uncle
 *
 * Return: The uncle else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node)
	{
		uncle = binary_tree_sibling(node->parent);
		(uncle == NULL) ? return (NULL) : return (uncle);
	}

	return (NULL);
}
