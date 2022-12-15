#include "binary_trees.h"

/**
 * binary_tree_is_leaf - is leaf?
 * @node: node
 * Return: integer (0 or 1)
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node != NULL)
if (node->left == NULL && node->right == NULL)
return (1);
return (0);
}
