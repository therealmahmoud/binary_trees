#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The number of leaves in the binary tree, or 0 if tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lheight = binary_tree_leaves(tree->left);
	rheight = binary_tree_leaves(tree->right);

	return (lheight + rheight);
}
