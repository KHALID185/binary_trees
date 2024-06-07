#include "binary_trees.h"

/**
 * binary_tree_size - calculate the size of tree
 *@tree: pointer to the node
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t nleft, nright;

		nleft = binary_tree_size(tree->left);
		nright = binary_tree_size(tree->right);
		return (1 + nleft + nright);
	}
}
