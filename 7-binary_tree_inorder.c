#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs a in-order traversal on a binary tree.
 *
 * @tree: Pointer to the root node of the binary tree.
 * @func: Pointer to the function to be called on each node value.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
