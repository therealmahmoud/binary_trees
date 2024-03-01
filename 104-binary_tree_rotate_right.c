#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate to the right
 *@tree: pointer to the tree
 * Return: the new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *node1, *node2;

	node1 = NULL;
	if (tree == NULL || tree->left == NULL)
		return (NULL);

	if (tree->left->right != NULL)
		node1 = tree->left->right;

	node2 = tree->left;
	tree->left->right = tree;
	tree->parent = tree->left;
	tree->left->parent = NULL;
	tree->left = node1;

	if (node1 != NULL)
		node1->parent = tree;

	return (node2);
}
