#include "binary_trees.h"

/**
 * binary_tree_is_root - A function that checks if a node is a root
 * @node: nodes is binary trees
 * Return: 0 if node is not a leaf, otherwise 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!(node && !node->parent))
		return (0);
	return (1);
}
