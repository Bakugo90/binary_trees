#include "binary_trees.h"

/**
 * binary_tree_height - height
 * @tree: node
 * Return: unsigned int
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t n;
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
return (0);

n = 1 + (unsigned int)(fmax(binary_tree_height(tree->left),
binary_tree_height(tree->right)));

return (n);
}

/**
 * binary_tree_preorder - pre order traversal
 * @tree: node root
 * @func: function apply over node
*/
int binary_tree_order(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

if (tree)
if (tree->left == NULL && tree->right == NULL)
return (binary_tree_height(tree));
if ((tree->left != NULL && tree->right == NULL) || (tree->left == NULL && tree->right != NULL))
return (-1);
binary_tree_order(tree->left);
binary_tree_order(tree->right);
}

int binary_tree_is_complete(const binary_tree_t *tree)
{
int n = binary_tree_order(tree);
if (binary_tree_order(tree) == -1 || binary_tree_order(tree) == 0)
return (0);

if (n != binary_tree_order(tree))
return (0);
else
{
binary_tree_is_complete(tree->left);
binary_tree_is_complete(tree->right);
}
return (1);
}
