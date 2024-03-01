#include "binary_trees.h"

/**
 *binary_tree_rotate_left - rotate to the left
 *@tree: pointer to the tree
 *Return: the new root
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *node1, *node2;

	node1 = NULL;
	if (tree == NULL || tree->right == NULL)
		return (NULL);

	if (tree->right->left != NULL)
		node1 = tree->right->left;
	node2 = tree->right;
	tree->right->left = tree;
	tree->parent = tree->right;
	tree->right->parent = NULL;
	tree->right = node1;
	if (node1 != NULL)
		node1->parent = tree;
	return (node2);
}
