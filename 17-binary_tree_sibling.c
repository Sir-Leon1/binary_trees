#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: The node to find the sibling
 *
 * Return: if node NULL, if no sibling, parent NULL - NULL otherwise sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	(node->parent)->left == node ? (node->parent)->right : (node->parent)->left;
}
