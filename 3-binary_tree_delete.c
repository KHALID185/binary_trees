#include "binary_trees.h"

/**
 * binary_tree_delete - fct for deleting a binary tree
 * @tree: this tree
 * Return: Void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
