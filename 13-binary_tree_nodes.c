#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes in a binary tree.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The number of nodes in the binary tree, or 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0, count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		count++;
	lheight = binary_tree_nodes(tree->left);
	rheight = binary_tree_nodes(tree->right);

	return (count + lheight + rheight);
}
