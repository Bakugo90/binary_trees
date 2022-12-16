#include "binary_trees.h"

/**
 * binary_tree_height - height
 * @tree: node
 * Return: unsigned int
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t n = 0, r = 0;
if (tree == NULL)
return (0);

n = (tree->left) ? 1 + binary_tree_height(tree->left) : 0;
r = (tree->right) ? 1 + binary_tree_height(tree->right) : 0;
return ((r > n) ? r : n);
}

/**
 * binary_tree_balance - balance
 * @tree: node
 * Return: int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

