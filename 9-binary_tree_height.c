#include "binary_trees.h"

/**
 * binary_tree-height - Measures height of a tree
 * @tree: The tree to measure
 *
 * Return: If tree is NUL - 0 otherwise depth
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + biary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
}
