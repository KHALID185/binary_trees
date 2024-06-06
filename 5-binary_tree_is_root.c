#include "binary_trees.h"

/**
 * binary_tree_is_root - fct verify if a node is root
 * @node: pointer to the node
 * Return: 1 otherwise 0 boolean
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
