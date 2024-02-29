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
	if (tree != NULL)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: The height of the binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		lheight = 1 + binary_tree_height(tree->left);
	else
		lheight = 1;
	if (tree->right != NULL)
		rheight = 1 + binary_tree_height(tree->right);
	else
		rheight = 1;

	if (lheight > rheight)
		return (lheight);
	else
		return (rheight);
}
