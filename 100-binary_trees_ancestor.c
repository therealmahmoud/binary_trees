#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 *
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor,
 * or NULL if no common ancestor is found.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second || !second->parent ||
		(!second->parent->parent && first->parent))
	{
			return (binary_trees_ancestor(first->parent, second));
	}
	if (second->parent == first || !first->parent ||
		(!first->parent->parent && second->parent))
	{
			return (binary_trees_ancestor(second->parent, first));
	}
	return (binary_trees_ancestor(first->parent, second->parent));
}
