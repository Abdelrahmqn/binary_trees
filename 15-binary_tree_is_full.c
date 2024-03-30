#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
* binary_tree_is_full - checks if a binary is full
*
* @tree: is a pointer to the root node of the tree to check
*
* Return: if tree is null, it's (0).
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
	return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
	return (1);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
	{
	return (0);
	}

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
/**
* binary_tree_height - measures the height of a binary tree
*
* @tree: a pointer to the root node of the tree to measure the height.
*
* Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = tree->left ? binary_tree_height(tree->left) : 0;
	right_height = tree->right ? binary_tree_height(tree->right) : 0;
	return (1 + (left_height > right_height ? left_height : right_height));
}
