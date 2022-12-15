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
 * binary_tree_full - node full
 * @tree: node
 * Return: int
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL && tree->parent == NULL)
        return (0);

    if (binary_tree_nodes(tree) == pow(2, binary_tree_height(tree) + 1) - 1)
        return (1);
    return (0);
}
