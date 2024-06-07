#include "binary_trees.h"

/**
 * binary_tree_node - this fct for creating binary trees
 * @parent: its a pointer to parent
 * @value: the value we put in a node
 * Return: pointer
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_nd = NULL;

	nw_nd = malloc(sizeof(binary_tree_t));
	if (!nw_nd)
		return (NULL);

	nw_nd->parent = parent;
	nw_nd->n = value;
	nw_nd->left = NULL;
	nw_nd->right = NULL;
	return (nw_nd);
}
