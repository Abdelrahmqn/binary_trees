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

	free(tree->left);
	free(tree->right);
    free(tree->parent);
	free(tree);
}
