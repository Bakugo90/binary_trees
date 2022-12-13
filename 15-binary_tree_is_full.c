#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t n = 0;
    if (tree == NULL)
        return (0);
    
    if (tree->left != NULL || tree->right != NULL)
        n++;
    n += binary_tree_nodes(tree->left)
        + binary_tree_nodes(tree->right);
    return (n);
}

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t n;
    if (tree == NULL || (tree->left == NULL && tree->right == NULL))
        return (0);

    n = 1 + (unsigned int)(fmax(binary_tree_height(tree->left),
        binary_tree_height(tree->right)));
    
    return (n);
}


int binary_tree_is_full(const binary_tree_t *tree)
{
    int n;
    if (tree == NULL && tree->parent == NULL)
        return (0);

    if (binary_tree_nodes(tree) == pow(2, binary_tree_height(tree) + 1) - 1)
        return (1);
    return (0);
}
