#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t n;
    if (tree == NULL || (tree->left == NULL && tree->right == NULL))
        return (0);

    n = 1 + (unsigned int)(fmax(binary_tree_height(tree->left),
        binary_tree_height(tree->right)));
    
    return (n);
}
