#include "binary_trees.h"

/**
 * binary_tree_is_leaf - fct virefy our tree is leaf
 * Return: 1 or 0 boolen
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
