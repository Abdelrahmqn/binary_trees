#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_is_leaf - function to check if the nodes are leaf.
*
* @node: is a pointer to the node to check
*
* Return: 1 if leaf, else : 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	return (0);
}
