#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t lheight = 0, rheight = 0, count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		count++;
	lheight = binary_tree_nodes(tree->left);
	rheight = binary_tree_nodes(tree->right);

	return (count + lheight + rheight);
}













/*Write a function that counts the nodes with at least 1 child in a binary tree

Prototype: size_t binary_tree_nodes(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to count the number of nodes
If tree is NULL, the function must return 0
A NULL pointer is not a node*/
