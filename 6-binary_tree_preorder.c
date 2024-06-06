
/**
 * binary_tree_preorder -use order to go to the tree
 * @tree: pointer to the root node
 * @func: pointer to a fct to call for node
 * Return: 0 or 1 boolean
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree) || !(func))
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
