#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a tree in inorder
 * @tree: Root node of the tree
 * @func: Function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
