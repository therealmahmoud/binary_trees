#include "binary_trees.h"

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);
	
	tree->parent = tree->right;
	tree->right->left = tree;
	tree->right->parent = NULL;

	return (tree);
}

/* Write a function that performs a left-rotation on a binary tree

Prototype: binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
Where tree is a pointer to the root node of the tree to rotate
Your function must return a pointer to the new root node of the tree once rotated */

/* alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 103-binary_tree_rotate_left.c 103-main.c 0-binary_tree_node.c -o 103-rotl
alex@/tmp/binary_trees$ ./103-rotl
(098)--.
     (128)--.
          (402)
Rotate-left 98
  .--(128)--.
(098)     (402)

  .--(128)-------.
(098)       .--(402)--.
          (420)     (450)
Rotate-left 128
       .-------(402)--.
  .--(128)--.       (450)
(098)     (420) */
