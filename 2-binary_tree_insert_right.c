#include "binary_trees.h"

/**
 * binary_tree_insert_right - fct for inserting in the right
 *@parent: pointer
 *@value: the value in the new node
 * Return: return a pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nd = NULL;

	if (parent == NULL)
		return (NULL);
	nd = malloc(sizeof(binary_tree_t));
	if (nd == NULL)
		return (NULL);

	nd->n = value;
	nd->parent = parent;
	nd->left = NULL;
	nd->right = NULL;
	if (parent->right == NULL)
		parent->right = nd;
	else
	{
		nd->right = parent->right;
		parent->right = nd;
		nd->right->parent = nd;
	}
	return (nd);
}
