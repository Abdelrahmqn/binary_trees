#include "binary_trees.h"
/**
* binary_tree_leaves - count leaves
*
* @tree: a pointer to the root node of tree to count leaves
*
* Return: null if pointer is null
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
	return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
	return (1);
	}
	else
	{
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
}
