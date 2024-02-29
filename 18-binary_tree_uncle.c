#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 *
 * @node: A pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node, or NULL if no uncle is found.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || binary_tree_sibling(node->parent) == NULL)
		return (NULL);

	if (node->n <= node->parent->n && binary_tree_sibling(node->parent) != NULL)
		return (binary_tree_sibling(node->parent));
	if (node->n > node->parent->n && binary_tree_sibling(node->parent) != NULL)
		return (binary_tree_sibling(node->parent));

	return (NULL);
}

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 *
 * @node: A pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node, or NULL if no sibling is found.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->n <= node->parent->n && node->parent->right != NULL)
		return (node->parent->right);
	if (node->n > node->parent->n && node->parent->left != NULL)
		return (node->parent->left);

	return (NULL);
}
