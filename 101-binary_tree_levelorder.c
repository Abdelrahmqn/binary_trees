#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * binary_tree_levelorder - traverse the tree using level-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 *
 * @func: is a pointer to a function to call for each node.
 *
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    int height = (int)binary_tree_height(tree), i;

    if (tree == NULL || func == NULL)
    {
        return;
    }

    for (i = 0; i < height; i++)
    {
        func(i);
    }
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
	return (1  + (left_height > right_height ? left_height : right_height));
}