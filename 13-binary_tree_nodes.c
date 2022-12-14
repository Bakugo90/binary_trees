#include "binary_trees.h"

/**
 * binary_tree_nodes - nodes count
 * @tree: node
 * Return: unsigned int
*/
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