#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The balance factor of the binary tree, or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight = 0, rheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		lheight = 1 + binary_tree_balance(tree->left);
	if (tree->right != NULL)
		rheight = 1 + binary_tree_balance(tree->right);

	return ((lheight - rheight));
}
