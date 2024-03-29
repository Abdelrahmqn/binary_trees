#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_inorder - goes through a binary tree in-order traversal
*
* @tree: is a pointer to the root node of the tree to traverse
* @func: is a pointer to func to call nodes.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
