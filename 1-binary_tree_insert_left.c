#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to put in the new node
 * Return: ptr to created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;

	if (parent == NULL)
		return (NULL);

	ptr = malloc(sizeof(binary_tree_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = value;
	ptr->left = NULL;
	ptr->parent = parent;
	ptr->right = NULL;

	if (parent->left != NULL)
	{
		ptr->left = parent->left;
		parent->left->parent = ptr;
		parent->left = ptr;
	}
	parent->left = ptr;

	return (ptr);
}
