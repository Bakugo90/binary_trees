#include "binary_trees.h"

/**
 * binary_tree_full - node full
 * @tree: node
 * Return: int
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (1);
if ((tree->left != NULL && tree->right == NULL) ||
(tree->left == NULL && tree->right != NULL) ||
binary_tree_is_full(tree->left) ||
binary_tree_is_full(tree->right))
return (0);

return (1);
}

