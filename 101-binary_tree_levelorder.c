#include "binary_trees.h"

/**
 * levelOder - Traverses the binary tree at a specific level.
 *
 * This helper function is used by binary_tree_levelorder
 * to traverse the binary tree
 * at a specific level and call a given function for each node value.
 *
 * @tree: A pointer to the root node of the binary tree.
 * @func: A pointer to the function to be called on each node value.
 * @level: The level at which to traverse the binary tree.
 */

void levelOder(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (tree == NULL || func == NULL)
		return;
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		levelOder(tree->left, func, level - 1);
		levelOder(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder - Performs a level-order traversal on a binary tree.
 *
 * This function traverses the binary tree in level-order,
 * visiting nodes level by level
 * from left to right. It calls a given function for each node value.
 *
 * @tree: A pointer to the root node of the binary tree.
 * @func: A pointer to the function to be called on each node value.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level = binary_tree_height(tree);
	int i;

	for (i = 1; i <= level; i++)
		levelOder(tree, func, i);
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
