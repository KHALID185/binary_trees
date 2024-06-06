#include "binary_trees.h"
/**
 * binary_tree_insert_left - fct for adding in the left
 * @parent: parent
 * @value: value of the nd
 * Return: NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_nd;

	if (parent == NULL)
	{
		return (NULL);
	}

	nw_nd = binary_tree_node(parent, value);
	if (nw_nd == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		nw_nd->left = parent->left;
		parent->left->parent = nw_nd;
	}
	parent->left = nw_nd;
	return (nw_nd);
}
