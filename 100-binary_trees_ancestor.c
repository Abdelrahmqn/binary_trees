#include "binary_trees.h"
/** binary_trees_ancestor - function that do LCA
 * @first: first node.
 * @second: second node
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{

    if (first == NULL || second == NULL)
        return (NULL);

    return (binary_trees_lca(NULL, first, second));
}
binary_tree_t *binary_trees_lca(const binary_tree_t *root, const binary_tree_t *first, const binary_tree_t *second)
{
    if (root == NULL)
    {
        return (NULL);
    }

    if (root->n > first->n && root->n > second->n)
        return (binary_trees_lca(root->left, first, second));
    else if (root->n < first->n && root->n < second->n)
        return (binary_trees_lca(root->right, first, second));
    else
        return ((binary_tree_t *)root);
}