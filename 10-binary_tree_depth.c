#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node, or 0 if tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		i = 1 + binary_tree_depth(tree->parent);
	return (i);
}
