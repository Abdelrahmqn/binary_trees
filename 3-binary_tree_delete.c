#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_delete - Deletes an entire binary tree
*
* @tree: the tree
*
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
	return;
	}

	if (tree->left != NULL)
	{
	free(tree->left);
	tree->left = NULL;
	}

	if (tree->right != NULL)
	{
	free(tree->right);
	tree->right = NULL;
	}

	free(tree);
}
