#include "binary_trees.h"

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
    binary_tree_t *temp;
    if (tree == NULL || tree->right == NULL)
        return (NULL);

    temp = tree->right;
    tree->right = tree->right->left;
    if (tree->right->left != NULL)
        tree->right->left->parent = tree;
    tree->parent = temp;
    temp->parent = NULL;
    return temp;
}
