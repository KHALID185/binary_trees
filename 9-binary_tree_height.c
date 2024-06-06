#include "binary_trees.h"

/**
 * binary_tree_height - fct calcule the height
 * @tree: tree
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lll = 0;
	size_t rrr = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			lll = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			rrr = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((lll > rrr) ? lll : rrr);
	}
}
