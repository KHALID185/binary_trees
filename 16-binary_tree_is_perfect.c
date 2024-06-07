#include "binary_trees.h"

/**
 * binary_tree_is_perfect - fct check perfection 
 * @tree: a pointer
 *
 * Return: integer
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t hhh = 0;
	size_t nd = 0;
	size_t pwr = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	hhh = _mk_height(tree);
	nd = _mk_size(tree);

	pwr = (size_t)_pow_recur(2, hhh + 1);
	return (pwr - 1 == nd);
}

/**
 *_pow_recur - fct return int value raised
 *@xx: the value to exponentiate
 *@yy: y
 *Return: integer
 */

int _pow_recur(int xx, int yy)
{
	if (yy < 0)
		return (-1);
	if (yy == 0)
		return (1);
	else
		return (xx * _pow_recur(xx, yy - 1));

}

/**
 * _mk_size - size of tree
 * @tree: pointer tree
 * Return: Size
 */
size_t _mk_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (_mk_size(tree->left) + _mk_size(tree->right) + 1);
}

/**
 * _mk_height - measures the height
 * @tree: tree to measure Hight
 * Return: height
 */
size_t _mk_height(const binary_tree_t *tree)
{
	size_t lheight = 0;
	size_t rheight = 0;

	if (!tree)
		return (0);

	lheight = tree->left ? 1 + _mk_height(tree->left) : 0;
	rheight = tree->right ? 1 + _mk_height(tree->right) : 0;
	return (lheight > rheight ? lheight : rheight);
}
