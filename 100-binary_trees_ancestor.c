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
	if (first->parent == second)
	{
		binary_trees_ancestor(first->parent, second);
			return (first->parent);
	}
	if (second->parent == first)
	{
		binary_trees_ancestor(second->parent, first);
			return (second->parent);
	}
	if (first->parent == second->parent)
		return (first->parent);
	if (first->parent->parent == second->parent)
		return (second->parent);
	if (second->parent->parent == first->parent)
		return (first->parent);
	return (NULL);
}
