#include "binary_trees.h"
/**
* binary_tree_uncle - finds the uncle
*
* @node: pointer tree
*
* Return: the uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node->parent == NULL || node->parent->parent == NULL || node == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);

}
