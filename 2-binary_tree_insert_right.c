#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the left-child.
 * @parent: A pointer to a node to insert the left child in.
 * @value: The value to store in the node.
 * Return: A right ptr to to created node or NULL on fail.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr_right = NULL;

	if (parent == NULL || value == '\0')
		return (NULL);

	ptr_right = malloc(sizeof(binary_tree_t));
	if (ptr_right == NULL)
		return (NULL);

	ptr_right->n = value;
	ptr_right->parent = parent;
	ptr_right->left = NULL;
	ptr_right->right = NULL;

	if (parent->right != NULL)
	{
		ptr_right->right = parent->right;
		ptr_right->right->parent = ptr_right;
	}
	parent->right = ptr_right;
	return (ptr_right);
}
