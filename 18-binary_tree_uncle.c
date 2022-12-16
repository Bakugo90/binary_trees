#include "binary_trees.h"
/**
 * binary_tree_uncle - uncle search
 * @node: node
 * Return: binary_tree_t
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);

if (node->parent->parent->left == node->parent)
return (node->parent->parent->right);
else
return (node->parent->parent->left);
}
