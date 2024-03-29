#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
* binary_tree_depth - measures the height of a binary tree
*
* @tree: a pointer to the root node of the tree to measure the depth.
*
* Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
	return (0);
	}

	while (tree->parent != NULL)
	{
	tree = tree->parent;
	depth++;
	}
	return (depth);
}
