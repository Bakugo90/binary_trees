#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL || tree->parent == NULL)
        return (0);
    return (1 + (binary_tree_depth(tree->parent)));
}
