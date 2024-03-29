#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
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
	size_t left_height, right_height;

	if (tree == NULL)
	{
	return (0);
	}
	else
	{
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (my_max(left_height, right_height) + 1);
	}
}
/**
* my_max - maxes greater heighter...etc}
* @a: is a greater than b?
* @b: is b greater than a?
*
* Return: any the winner
*/
size_t my_max(size_t a, size_t b)
{
	if (a >= b)
	{
	return (a);
	}
	else
	{
	return (b);
	}
}
