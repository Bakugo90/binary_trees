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
 * binary_tree_balance - balance
 * @tree: node
 * Return: int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    signed int n = 0;
    if (tree == NULL || (tree->left == NULL && tree->right == NULL))
        return (n);

    n = ((signed int)(binary_tree_height(tree->left))
        - (signed int)(binary_tree_height(tree->right)));
    return (n);
}

