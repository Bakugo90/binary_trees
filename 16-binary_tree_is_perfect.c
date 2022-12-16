#include "binary_trees.h"

/**
 * is_leaf - is leaf?
 * @node: node
 * Return: integer (0 or 1)
*/
int is_leaf(const binary_tree_t *node)
{
if (node != NULL)
if (node->left == NULL && node->right == NULL)
return (1);
return (0);
}

/**
 * depth - deep
 * @tree: node
 * Return: unsigned int
*/
size_t depth(const binary_tree_t *tree)
{
if (tree == NULL || tree->parent == NULL)
return (0);
return (1 + (binary_tree_depth(tree->parent)));
}

/**
 * leaf_full - full in leaf
 * @tree: node
 * Return: integer (0 or 1)
*/
int leaf_full(const binary_tree_t *tree)
{
if (is_leaf(tree))
return(tree);

return ((tree->left) ? leaf_full(tree->left) : leaf_full(tree->right));
}

/**
 * is_perfect - perfect recursion
 * @tree: node
 * @n: deep
 * @height: height
 * Return: integer (0 or 1)
*/
int is_perfect(const binary_tree_t *tree, size_t n, size_t height)
{
if (is_leaf(tree))
return ((height == n) ? 1: 0);

if (tree->left == NULL || tree->right == 0)
return (0);

return (is_perfect(tree->left, n, height + 1)
&& is_perfect(tree->right, n, height + 1));
}

/**
 * binary_tree_is_perfect - perfect
 * @tree: node
 * Return: integer (0 or 1)
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == 0)
return (0);

return (is_perfect(tree, depth(leaf_full(tree)), 0));
}
