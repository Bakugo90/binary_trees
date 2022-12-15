#include "binary_trees.h"

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    if (first == second && first != NULL && second != NULL)
        return (first);

    if (first == NULL || first->parent == NULL || second == NULL || second->parent == NULL)
        return (NULL);
    
    binary_trees_ancestor(first->parent, second->parent);
}
