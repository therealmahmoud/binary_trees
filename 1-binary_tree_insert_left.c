#include "binary_trees.h"

/**
 * binary_tree_insert_left -Inserts new node as the left child of a given node.
 *
 * @parent: Pointer to the parent node to insert the left child.
 * @value: Value to store in the new left child node.
 *
 * Return: Pointer to the newly created left child node or NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
	}
	else
	{
	newNode->left = NULL;
	}

	parent->left = newNode;
	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;
	return (newNode);
}
