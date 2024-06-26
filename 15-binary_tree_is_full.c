#include "binary_trees.h"

/**
 * binary_tree_is_full - verify if the true is full
 * @tree: a pointer to the root node
 * Return: integer
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
