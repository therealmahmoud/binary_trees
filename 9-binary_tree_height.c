#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: The height of the binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);

}
