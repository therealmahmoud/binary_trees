#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node as the
 * right child of a given node.
 *
 * @parent: Pointer to the parent node to insert the right child.
 * @value: Value to store in the new right child node.
 *
 * Return: Pointer to the newly created right child node or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		parent->right->parent = newNode;
		newNode->right = parent->right;
	}
	else
	{
	newNode->right = NULL;
	}

	parent->right = newNode;
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	return (newNode);
}
