#include "binary_trees.h"


size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t lheight = 1, rheight = 1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		lheight = 1 + binary_tree_size(tree->left);
    if (tree->right != NULL)
		rheight = 1 + binary_tree_size(tree->right);

    return ((lheight + rheight)-1);
}




/*Write a function that measures the size of a binary tree
Prototype: size_t binary_tree_size(const binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to measure the size
If tree is NULL, the function must return 0*/