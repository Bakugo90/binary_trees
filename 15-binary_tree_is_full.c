#include "binary_trees.h"

/**
 * isfull - is full?
 * @tree: node
 * Return: integer (0 or 1)
*/
int isfull(const binary_tree_t *tree)
{
if (tree != NULL)
{
if ((tree->left != NULL && tree->right == NULL) ||
(tree->left == NULL && tree->right != NULL) ||
binary_tree_is_full(tree->left) == 0 ||
binary_tree_is_full(tree->right) == 0)
return (0);
}
return (1);
}
/**
 * binary_tree_is_full - node full
 * @tree: node
 * Return: int
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (isfull(tree));
}
