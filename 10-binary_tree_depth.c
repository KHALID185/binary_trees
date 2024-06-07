#include "binary_trees.h"

/**
 * binary_tree_depth - fct to calculate the depth of node
 *@tree: pointer to the nd
 * Return: the size
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
