#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: to measure the balance factor
*
* Return: the result.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
	return (0);
	}
	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);
	return (left_height - right_height);
}
/**
* binary_tree_heights - measures the height of a binary tree
*
* @tree: a pointer to the root node of the tree to measure the height.
*
* Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_heights(const binary_tree_t *tree)
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
