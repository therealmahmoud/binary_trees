#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs a post-order traversal on a binary tree.
 *
 * @tree: Pointer to the root node of the binary tree.
 * @func: Pointer to the function to be called on each node value.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
