#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_preorder - Goes through the tree using pre-order
*
* @tree: pointer to the root of the tree to traverse
*
* @func: is a pointer to a function to call for each node
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
