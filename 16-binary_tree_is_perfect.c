#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * A binary tree is considered perfect if all its levels are completely filled.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_size(tree->left) ==
	binary_tree_size(tree->right) &&
	binary_tree_height(tree->left) ==
	binary_tree_height(tree->right))
	{
		return (1);
	}

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
