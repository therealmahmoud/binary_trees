#include "binary_trees.h"

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
/*Write a function that inserts a node as the left-child of another node

Where parent is a pointer to the node to insert the left-child in
And value is the value to store in the new node
Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
If parent already has a left-child, the new node must take its place,
and the old left-child must be set as the left-child of the new node.
*/