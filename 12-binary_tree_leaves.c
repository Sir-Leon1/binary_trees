#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves on a tree
 * @tree: The tree to check
 *
 * Return: O on tree== Null else number
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count += binary_tree_is_leaf(tree) ? 1 : 0;

	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);

	return (count);
}
