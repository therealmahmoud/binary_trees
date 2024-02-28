#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The size of the binary tree, or 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lheight = 1, rheight = 1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		lheight = 1 + binary_tree_size(tree->left);
	if (tree->right != NULL)
		rheight = 1 + binary_tree_size(tree->right);

	return ((lheight + rheight) - 1);
}
