#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
* binary_tree_height - measures the height of a binary tree
*
* @tree: a pointer to the root node of the tree to measure the height.
*
* Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	if (tree == NULL)
	{
	return (0);
	}

	left_depth = binary_tree_height(tree->left);
	right_depth = binary_tree_height(tree->right);

	if (left_depth > right_depth)
	{
	return (left_depth + 1);
	}
	else
	{
	return (right_depth + 1);
	}
}
